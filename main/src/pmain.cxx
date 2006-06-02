// @(#)root/main:$Name:  $:$Id: pmain.cxx,v 1.6 2006/04/21 16:29:33 rdm Exp $
// Author: Fons Rademakers   15/02/97

/*************************************************************************
 * Copyright (C) 1995-2000, Rene Brun and Fons Rademakers.               *
 * All rights reserved.                                                  *
 *                                                                       *
 * For the licensing terms see $ROOTSYS/LICENSE.                         *
 * For the list of contributors see $ROOTSYS/README/CREDITS.             *
 *************************************************************************/

//////////////////////////////////////////////////////////////////////////
//                                                                      //
// PMain                                                                //
//                                                                      //
// Main program used to create PROOF server application.                //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <errno.h>

#ifdef HAVE_CONFIG
#include "config.h"
#endif
#include "TApplication.h"
#include "TInterpreter.h"
#include "TROOT.h"
#include "TSystem.h"

// Special type for the hook to the TXProofServ constructor, needed to avoid
// using the plugin manager
typedef TApplication *(*TProofServ_t)(Int_t *argc, char **argv);

//______________________________________________________________________________
static int RedirectOutput(const char *logfile, const char *loc)
{
   // Redirect stdout to 'logfile'. This log file will be flushed to the
   // client or master after each command.
   // On success return descriptor of the open log file. Return -1 on failure.

   if (loc)
      Printf("%s: RedirectOutput: enter: %s", loc, logfile);

   if (!logfile || strlen(logfile) <= 0) {
      Printf("%s: RedirectOutput: logfile path undefined", loc);
      return -1;
   }

   if (loc)
      Printf("%s: RedirectOutput: reopen %s", loc, logfile);
   FILE *flog = freopen(logfile, "w", stdout);
   if (!flog) {
      Printf("%s: RedirectOutput: could not freopen stdout", loc);
      return -1;
   }

   if (loc)
      Printf("%s: RedirectOutput: dup2 ...", loc);
   if ((dup2(fileno(stdout), fileno(stderr))) < 0) {
      Printf("%s: RedirectOutput: could not redirect stderr", loc);
      return -1;
   }

   if (loc)
      Printf("%s: RedirectOutput: read open ...", loc);
   flog = fopen(logfile, "r");
   if (!flog) {
      Printf("%s: RedirectOutput: could not open logfile %s", loc, logfile);
      return -1;
   }

   if (loc)
      Printf("%s: RedirectOutput: done!", loc);
   // We are done
   return fileno(flog);
}

//______________________________________________________________________________
int main(int argc, char **argv)
{
   // PROOF server main program.

//#define R__DEBUG
#ifdef R__DEBUG
   int debug = 1;
   while (debug)
      ;
#endif

   int loglevel = -1;
   if (getenv("ROOTPROOFLOGLEVEL"))
      loglevel = atoi(getenv("ROOTPROOFLOGLEVEL"));
   if (loglevel > 0)
      Printf("%s: starting %s", argv[1], argv[0]);

   // Redirect the output
   const char *logfile = 0;
   int logfiledes = -1;
   if ((logfile = getenv("ROOTPROOFLOGFILE"))) {
      char *loc = (loglevel > 0) ? argv[1] : 0;
      if (loglevel > 0)
         Printf("%s: redirecting output to %s", argv[1], logfile);
      if ((logfiledes = RedirectOutput(logfile, loc)) < 0) {
         Printf("%s: problems redirecting output to file %s", argv[1], logfile);
         exit(1);
      }
      // Transmit the file descriptor to the TProofServ application
      char *ev = new char[strlen("ROOTPROOFLOGFILEDES=")+10];
      sprintf(ev, "ROOTPROOFLOGFILEDES=%d", logfiledes);
      putenv(ev);
   }
   if (loglevel > 0)
      Printf("%s: output redirected to %s", argv[1], logfile);

   gROOT->SetBatch();
   TApplication *theApp = 0;

   // Enable autoloading
   gInterpreter->EnableAutoLoading();

   TString getter("GetTProofServ");
#ifdef ROOTLIBDIR
   TString prooflib = TString(ROOTLIBDIR) + "/libProof";
#else
   TString prooflib = TString(gRootDir) + "/lib/libProof";
#endif
   if (argc > 2) {
      // XPD: additionally load the appropriate library
      prooflib.ReplaceAll("/libProof", "/libProofx");
      getter.ReplaceAll("GetTProofServ", "GetTXProofServ");
   }
   char *p = 0;
   if ((p = gSystem->DynamicPathName(prooflib, kTRUE))) {
      delete[] p;
      if (gSystem->Load(prooflib) == -1) {
         Printf("%s: can't load %s", argv[1], prooflib.Data());
         exit(1);
      }
   } else {
      Printf("%s: can't locate %s", argv[1], prooflib.Data());
      exit(1);
   }

   // Locate constructor
   Func_t f = gSystem->DynFindSymbol(prooflib, getter);
   if (f) {
      theApp = (TApplication *) (*((TProofServ_t)f))(&argc, argv);
   } else {
      Printf("%s: can't find %s", argv[1], getter.Data());
      exit(1);
   }

   // Ready to run
   if (loglevel > 0)
      Printf("%s: running the TProofServ application", argv[1]);

   theApp->Run();

   // When we return here we are done
   delete theApp;

   exit(0);
}
