// Author: Bertrand Bellenot   22/08/02

/*************************************************************************
 * Copyright (C) 1995-2002, Bertrand Bellenot.                           *
 * All rights reserved.                                                  *
 *                                                                       *
 * For the licensing terms see the LICENSE file.                         *
 *************************************************************************/

//////////////////////////////////////////////////////////////////////////
//                                                                      //
// Particles definition file with PDG code, name and lifetimes.         //
// Used for initialisations, name retrieving and lifetime generation    //
//                                                                      //
//////////////////////////////////////////////////////////////////////////


typedef struct {
    Char_t   name[40];
    Int_t    code;
    Double_t lifetime;
} str_particle_def;

const str_particle_def particle_def[] = {
      { "down"              ,     1,       1.0e-20    },
      { "down bar"          ,    -1,       1.0e-20    },
      { "up"                ,     2,       1.0e-20    },
      { "up bar"            ,    -2,       1.0e-20    },
      { "strange"           ,     3,       1.0e-20    },
      { "strange bar"       ,    -3,       1.0e-20    },
      { "charm"             ,     4,       1.0e-20    },
      { "charm bar"         ,    -4,       1.0e-20    },
      { "bottom"            ,     5,       1.0e-20    },
      { "bottom bar"        ,    -5,       1.0e-20    },
      { "top"               ,     6,       1.0e-20    },
      { "top bar"           ,    -6,       1.0e-20    },
      { "gluon"             ,    21,       1.0e-20    },
      { "e-"                ,    11,       0.0        },
      { "e+"                ,   -11,       0.0        },
      { "nu(e)"             ,    12,       0.0        },
      { "nu(e) bar"         ,   -12,       0.0        },
      { "mu-"               ,    13,       2.19703e-6 },
      { "mu+"               ,   -13,       2.19703e-6 },
      { "nu(mu)"            ,    14,       0.0        },
      { "nu(mu) bar"        ,   -14,       0.0        },
      { "tau-"              ,    15,       0.305e-12  },
      { "tau+"              ,   -15,       0.305e-12  },
      { "nu(tau)"           ,    16,       0.0        },
      { "nu(tau) bar"       ,   -16,       0.0        },
      { "gamma"             ,    22,       0.0        },
      { "Z0"                ,    23,       1.0e-20    },
      { "W+"                ,    24,       1.0e-20    },
      { "W-"                ,   -24,       1.0e-20    },
      { "pi0"               ,    111,      8.4e-17    },
      { "rho(770)0"         ,    113,      1.0e-20    },
      { "a(2)(1320)0"       ,    115,      1.0e-20    },
      { "rho(3)(1690)0"     ,    117,      1.0e-20    },
      { "K(L)0"             ,    130,      5.17e-8    },
      { "pi+"               ,    211,      2.6030e-8  },
      { "pi-"               ,   -211,      2.6030e-8  },
      { "rho(770)+"         ,    213,      1.0e-20    },
      { "rho(770)-"         ,   -213,      1.0e-20    },
      { "a(2)(1320)+"       ,    215,      1.0e-20    },
      { "a(2)(1320)-"       ,   -215,      1.0e-20    },
      { "rho(3)(1690)+"     ,    217,      1.0e-20    },
      { "rho(3)(1690)-"     ,   -217,      1.0e-20    },
      { "eta0"              ,    221,      1.0e-10    },
      { "omega(782)0"       ,    223,      1.0e-20    },
      { "f(2)(1270)0"       ,    225,      1.0e-20    },
      { "omega(3)(1670)0"   ,    227,      1.0e-20    },
      { "f(4)(2050)0"       ,    229,      1.0e-20    },
      { "K(S)0"             ,    310,      0.8922e-10 },
      { "K0"                ,    311,      1.0e-20    },
      { "K0 bar"            ,   -311,      1.0e-20    },
      { "K*(892)0"          ,    313,      1.0e-20    },
      { "K*(892)0 bar"      ,   -313,      1.0e-20    },
      { "K(2)*(1430)0"      ,    315,      1.0e-20    },
      { "K(2)*(1430)0 bar"  ,   -315,      1.0e-20    },
      { "K(3)*(1780)0"      ,    317,      1.0e-20    },
      { "K(3)*(1780)0 bar"  ,   -317,      1.0e-20    },
      { "K(4)*(2045)0"      ,    319,      1.0e-20    },
      { "K(4)*(2045)0 bar"  ,   -319,      1.0e-20    },
      { "K+"                ,    321,      1.2371e-8  },
      { "K-"                ,   -321,      1.2371e-8  },
      { "K*(892)+"          ,    323,      1.0e-20    },
      { "K*(892)-"          ,   -323,      1.0e-20    },
      { "K(2)*(1430)+"      ,    325,      1.0e-20    },
      { "K(2)*(1430)-"      ,   -325,      1.0e-20    },
      { "K(3)*(1780)+"      ,    327,      1.0e-20    },
      { "K(3)*(1780)-"      ,   -327,      1.0e-20    },
      { "K(4)*(2045)+"      ,    329,      1.0e-20    },
      { "K(4)*(2045)-"      ,   -329,      1.0e-20    },
      { "eta'(958)0"        ,    331,      1.0e-20    },
      { "phi(1020)0"        ,    333,      1.0e-20    },
      { "f(2)'(1525)0"      ,    335,      1.0e-20    },
      { "phi(3)(1850)0"     ,    337,      1.0e-20    },
      { "D+"                ,    411,      10.66e-13  },
      { "D-"                ,   -411,      10.66e-13  },
      { "D*(2010)+"         ,    413,      1.0e-20    },
      { "D*(2010)-"         ,   -413,      1.0e-20    },
      { "D(2)*(2460)+"      ,    415,      1.0e-20    },
      { "D(2)*(2460)-"      ,   -415,      1.0e-20    },
      { "D0"                ,    421,      4.20e-13   },
      { "D*(2007)0"         ,    423,      1.0e-20    },
      { "D(2)*(2460)0"      ,    425,      1.0e-20    },
      { "D(s)+"             ,    431,      1.0e-20    },
      { "D(s)-"             ,   -431,      1.0e-20    },
      { "D(s)*+"            ,    433,      1.0e-20    },
      { "D(s)*-"            ,   -433,      1.0e-20    },
      { "eta(c)(1S)0"       ,    441,      1.0e-20    },
      { "J/psi(1S)0"        ,    443,      1.0e-20    },
      { "chi(c2)(1P)0"      ,    445,      1.0e-20    },
      { "B0"                ,    511,      1.0e-20    },
      { "B*0"               ,    513,      1.0e-20    },
      { "B+"                ,    521,      1.0e-20    },
      { "B-"                ,   -521,      1.0e-20    },
      { "B*+"               ,    523,      1.0e-20    },
      { "B*-"               ,   -523,      1.0e-20    },
      { "B(s)0"             ,    531,      1.0e-20    },
      { "chi(b0)(1P)0"      ,    551,      1.0e-20    },
      { "Upsilon(1S)0"      ,    553,      1.0e-20    },
      { "chi(b2)(1P)0"      ,    555,      1.0e-20    },
      { "Delta(1620)-"      ,    1112,     1.0e-20    },
      { "Delta(1620)+ bar"  ,   -1112,     1.0e-20    },
      { "Delta(1232)-"      ,    1114,     1.0e-20    },
      { "Delta(1232)+ bar"  ,   -1114,     1.0e-20    },
      { "Delta(1905)-"      ,    1116,     1.0e-20    },
      { "Delta(1905)+ bar"  ,   -1116,     1.0e-20    },
      { "Delta(1950)-"      ,    1118,     1.0e-20    },
      { "Delta(1950)+ bar"  ,   -1118,     1.0e-20    },
      { "Delta(1620)0"      ,    1212,     1.0e-20    },
      { "Delta(1620)0 bar"  ,   -1212,     1.0e-20    },
      { "N(1520)0"          ,    1214,     1.0e-20    },
      { "N(1520)0 bar"      ,   -1214,     1.0e-20    },
      { "Delta(1905)0"      ,    1216,     1.0e-20    },
      { "Delta(1905)0 bar"  ,   -1216,     1.0e-20    },
      { "N(2190)0"          ,    1218,     1.0e-20    },
      { "N(2190)0 bar"      ,   -1218,     1.0e-20    },
      { "n"                 ,    2112,     889.1      },
      { "n bar"             ,   -2112,     889.1      },
      { "Delta(1232)0"      ,    2114,     1.0e-20    },
      { "Delta(1232)0 bar"  ,   -2114,     1.0e-20    },
      { "N(1675)0"          ,    2116,     1.0e-20    },
      { "N(1675)0 bar"      ,   -2116,     1.0e-20    },
      { "Delta(1950)0"      ,    2118,     1.0e-20    },
      { "Delta(1950)0 bar"  ,   -2118,     1.0e-20    },
      { "Delta(1620)+"      ,    2122,     1.0e-20    },
      { "Delta(1620)- bar"  ,   -2122,     1.0e-20    },
      { "N(1520)+"          ,    2124,     1.0e-20    },
      { "N(1520)- bar"      ,   -2124,     1.0e-20    },
      { "Delta(1905)+"      ,    2126,     1.0e-20    },
      { "Delta(1905)- bar"  ,   -2126,     1.0e-20    },
      { "N(2190)+"          ,    2128,     1.0e-20    },
      { "N(2190)- bar"      ,   -2128,     1.0e-20    },
      { "p"                 ,    2212,     0.0        },
      { "p bar"             ,   -2212,     0.0        },
      { "Delta(1232)+"      ,    2214,     1.0e-20    },
      { "Delta(1232)- bar"  ,   -2214,     1.0e-20    },
      { "N(1675)+"          ,    2216,     1.0e-20    },
      { "N(1675)- bar"      ,   -2216,     1.0e-20    },
      { "Delta(1950)+"      ,    2218,     1.0e-20    },
      { "Delta(1950)- bar"  ,   -2218,     1.0e-20    },
      { "Delta(1620)++"     ,    2222,     1.0e-20    },
      { "Delta(1620)-- bar" ,   -2222,     1.0e-20    },
      { "Delta(1232)++"     ,    2224,     1.0e-20    },
      { "Delta(1232)-- bar" ,   -2224,     1.0e-20    },
      { "Delta(1905)++"     ,    2226,     1.0e-20    },
      { "Delta(1905)-- bar" ,   -2226,     1.0e-20    },
      { "Delta(1950)++"     ,    2228,     1.0e-20    },
      { "Delta(1950)-- bar" ,   -2228,     1.0e-20    },
      { "Sigma-"            ,    3112,     1.479e-10  },
      { "Sigma+ bar"        ,   -3112,     0.799e-10  },
      { "Sigma(1385)-"      ,    3114,     1.0e-20    },
      { "Sigma(1385)+ bar"  ,   -3114,     1.0e-20    },
      { "Sigma(1775)-"      ,    3116,     1.0e-20    },
      { "Sigma(1775)+ bar"  ,   -3116,     1.0e-20    },
      { "Sigma(2030)-"      ,    3118,     1.0e-20    },
      { "Sigma(2030)+ bar"  ,   -3118,     1.0e-20    },
      { "Lambda0"           ,    3122,     1.0e-10    },
      { "Lambda0 bar"       ,   -3122,     1.0e-10    },
      { "Lambda(1520)0"     ,    3124,     1.0e-20    },
      { "Lambda(1520)0 bar" ,   -3124,     1.0e-20    },
      { "Lambda(1820)0"     ,    3126,     1.0e-20    },
      { "Lambda(1820)0 bar" ,   -3126,     1.0e-20    },
      { "Lambda(2100)0"     ,    3128,     1.0e-20    },
      { "Lambda(2100)0 bar" ,   -3128,     1.0e-20    },
      { "Sigma0"            ,    3212,     7.4e-20    },
      { "Sigma0 bar"        ,   -3212,     7.4e-20    },
      { "Sigma(1385)0"      ,    3214,     1.0e-20    },
      { "Sigma(1385)0 bar"  ,   -3214,     1.0e-20    },
      { "Sigma(1775)0"      ,    3216,     1.0e-20    },
      { "Sigma(1775)0 bar"  ,   -3216,     1.0e-20    },
      { "Sigma(2030)0"      ,    3218,     1.0e-20    },
      { "Sigma(2030)0 bar"  ,   -3218,     1.0e-20    },
      { "Sigma+"            ,    3222,     0.799e-10  },
      { "Sigma- bar"        ,   -3222,     1.479e-10  },
      { "Sigma(1385)+"      ,    3224,     1.0e-20    },
      { "Sigma(1385)- bar"  ,   -3224,     1.0e-20    },
      { "Sigma(1775)+"      ,    3226,     1.0e-20    },
      { "Sigma(1775)- bar"  ,   -3226,     1.0e-20    },
      { "Sigma(2030)+"      ,    3228,     1.0e-20    },
      { "Sigma(2030)- bar"  ,   -3228,     1.0e-20    },
      { "Xi-"               ,    3312,     1.639e-10  },
      { "Xi+ bar"           ,   -3312,     1.639e-10  },
      { "Xi(1530)-"         ,    3314,     1.0e-20    },
      { "Xi(1530)+ bar"     ,   -3314,     1.0e-20    },
      { "Xi0"               ,    3322,     2.9e-10    },
      { "Xi0 bar"           ,   -3322,     2.9e-10    },
      { "Xi(1530)0"         ,    3324,     1.0e-20    },
      { "Xi(1530)0 bar"     ,   -3324,     1.0e-20    },
      { "Omega-"            ,    3334,     0.822e-10  },
      { "Omega+ bar"        ,   -3334,     0.822e-10  },
      { "Sigma(c)(2455)0"   ,    4112,     1.0e-20    },
      { "Sigma(c)(2455)0 bar",  -4112,     1.0e-20    },
      { "Lambda(c)+"        ,    4122,     1.0e-20    },
      { "Lambda(c)- bar"    ,   -4122,     1.0e-20    },
      { "Sigma(c)(2455)+"   ,    4212,     1.0e-20    },
      { "Sigma(c)(2455)- bar",  -4212,     1.0e-20    },
      { "Sigma(c)(2455)++"  ,    4222,     1.0e-20    },
      { "Sigma(c)(2455)-- bar", -4222,     1.0e-20    },
      { "Xi(c)0"            ,    4312,     1.0e-20    },
      { "Xi(c)0 bar"        ,   -4312,     1.0e-20    },
      { "Xi(c)+"            ,    4322,     1.0e-20    },
      { "Xi(c)- bar"        ,   -4322,     1.0e-20    },
      { "Lambda(b)0"        ,    5122,     1.0e-20    },
      { "Lambda(b)0 bar"    ,   -5122,     1.0e-20    },
      { "a(0)(980)0"        ,    10111,    1.0e-20    },
      { "b(1)(1235)0"       ,    10113,    1.0e-20    },
      { "pi(2)(1670)0"      ,    10115,    1.0e-20    },
      { "a(0)(980)+"        ,    10211,    1.0e-20    },
      { "a(0)(980)-"        ,   -10211,    1.0e-20    },
      { "b(1)(1235)+"       ,    10213,    1.0e-20    },
      { "b(1)(1235)-"       ,   -10213,    1.0e-20    },
      { "pi(2)(1670)+"      ,    10215,    1.0e-20    },
      { "pi(2)(1670)-"      ,   -10215,    1.0e-20    },
      { "f(0)(980)0"        ,    10221,    1.0e-20    },
      { "h(1)(1170)0"       ,    10223,    1.0e-20    },
      { "K(0)*(1430)0"      ,    10311,    1.0e-20    },
      { "K(0)*(1430)0 bar"  ,   -10311,    1.0e-20    },
      { "K(1)(1270)0"       ,    10313,    1.0e-20    },
      { "K(1)(1270)0 bar"   ,   -10313,    1.0e-20    },
      { "K(2)(1770)0"       ,    10315,    1.0e-20    },
      { "K(2)(1770)0 bar"   ,   -10315,    1.0e-20    },
      { "K(0)*(1430)+"      ,    10321,    1.0e-20    },
      { "K(0)*(1430)-"      ,   -10321,    1.0e-20    },
      { "K(1)(1270)+"       ,    10323,    1.0e-20    },
      { "K(1)(1270)-"       ,   -10323,    1.0e-20    },
      { "K(2)(1770)+"       ,    10325,    1.0e-20    },
      { "K(2)(1770)-"       ,   -10325,    1.0e-20    },
      { "phi(1680)0"        ,    10333,    1.0e-20    },
      { "D(1)(2420)0"       ,    10423,    1.0e-20    },
      { "D(s1)(2536)+"      ,    10433,    1.0e-20    },
      { "D(s1)(2536)-"      ,   -10433,    1.0e-20    },
      { "chi(c0)(1P)0"      ,    10441,    1.0e-20    },
      { "chi(c1)(1P)0"      ,    10443,    1.0e-20    },
      { "chi(b0)(2P)0"      ,    10551,    1.0e-20    },
      { "chi(b1)(1P)0"      ,    10553,    1.0e-20    },
      { "chi(b2)(2P)0"      ,    10555,    1.0e-20    },
      { "Delta(1900)-"      ,    11112,    1.0e-20    },
      { "Delta(1900)+ bar"  ,   -11112,    1.0e-20    },
      { "Delta(1700)-"      ,    11114,    1.0e-20    },
      { "Delta(1700)+ bar"  ,   -11114,    1.0e-20    },
      { "Delta(1930)-"      ,    11116,    1.0e-20    },
      { "Delta(1930)+ bar"  ,   -11116,    1.0e-20    },
      { "Delta(1900)0"      ,    11212,    1.0e-20    },
      { "Delta(1900)0 bar"  ,   -11212,    1.0e-20    },
      { "Delta(1930)0"      ,    11216,    1.0e-20    },
      { "Delta(1930)0 bar"  ,   -11216,    1.0e-20    },
      { "N(1440)0"          ,    12112,    1.0e-20    },
      { "N(1440)0 bar"      ,   -12112,    1.0e-20    },
      { "Delta(1700)0"      ,    12114,    1.0e-20    },
      { "Delta(1700)0 bar"  ,   -12114,    1.0e-20    },
      { "N(1680)0"          ,    12116,    1.0e-20    },
      { "N(1680)0 bar"      ,   -12116,    1.0e-20    },
      { "Delta(1900)+"      ,    12122,    1.0e-20    },
      { "Delta(1900)- bar"  ,   -12122,    1.0e-20    },
      { "Delta(1930)+"      ,    12126,    1.0e-20    },
      { "Delta(1930)- bar"  ,   -12126,    1.0e-20    },
      { "N(1440)+"          ,    12212,    1.0e-20    },
      { "N(1440)- bar"      ,   -12212,    1.0e-20    },
      { "Delta(1700)+"      ,    12214,    1.0e-20    },
      { "Delta(1700)- bar"  ,   -12214,    1.0e-20    },
      { "N(1680)+"          ,    12216,    1.0e-20    },
      { "N(1680)- bar"      ,   -12216,    1.0e-20    },
      { "Delta(1900)++"     ,    12222,    1.0e-20    },
      { "Delta(1900)-- bar" ,   -12222,    1.0e-20    },
      { "Delta(1700)++"     ,    12224,    1.0e-20    },
      { "Delta(1700)-- bar" ,   -12224,    1.0e-20    },
      { "Delta(1930)++"     ,    12226,    1.0e-20    },
      { "Delta(1930)-- bar" ,   -12226,    1.0e-20    },
      { "Sigma(1660)-"      ,    13112,    1.0e-20    },
      { "Sigma(1660)+ bar"  ,   -13112,    1.0e-20    },
      { "Sigma(1670)-"      ,    13114,    1.0e-20    },
      { "Sigma(1670)+ bar"  ,   -13114,    1.0e-20    },
      { "Sigma(1915)-"      ,    13116,    1.0e-20    },
      { "Sigma(1915)+ bar"  ,   -13116,    1.0e-20    },
      { "Lambda(1405)0"     ,    13122,    1.0e-20    },
      { "Lambda(1405)0 bar" ,   -13122,    1.0e-20    },
      { "Lambda(1690)0"     ,    13124,    1.0e-20    },
      { "Lambda(1690)0 bar" ,   -13124,    1.0e-20    },
      { "Lambda(1830)0"     ,    13126,    1.0e-20    },
      { "Lambda(1830)0 bar" ,   -13126,    1.0e-20    },
      { "Sigma(1660)0"      ,    13212,    1.0e-20    },
      { "Sigma(1660)0 bar"  ,   -13212,    1.0e-20    },
      { "Sigma(1670)0"      ,    13214,    1.0e-20    },
      { "Sigma(1670)0 bar"  ,   -13214,    1.0e-20    },
      { "Sigma(1915)0"      ,    13216,    1.0e-20    },
      { "Sigma(1915)0 bar"  ,   -13216,    1.0e-20    },
      { "Sigma(1660)+"      ,    13222,    1.0e-20    },
      { "Sigma(1660)- bar"  ,   -13222,    1.0e-20    },
      { "Sigma(1670)+"      ,    13224,    1.0e-20    },
      { "Sigma(1670)- bar"  ,   -13224,    1.0e-20    },
      { "Sigma(1915)+"      ,    13226,    1.0e-20    },
      { "Sigma(1915)- bar"  ,   -13226,    1.0e-20    },
      { "Xi(1820)-"         ,    13314,    1.0e-20    },
      { "Xi(1820)+ bar"     ,   -13314,    1.0e-20    },
      { "Xi(1820)0"         ,    13324,    1.0e-20    },
      { "Xi(1820)0 bar"     ,   -13324,    1.0e-20    },
      { "pi(1300)0"         ,    20111,    1.0e-20    },
      { "a(1)(1260)0"       ,    20113,    1.0e-20    },
      { "pi(1300)+"         ,    20211,    1.0e-20    },
      { "pi(1300)-"         ,   -20211,    1.0e-20    },
      { "a(1)(1260)+"       ,    20213,    1.0e-20    },
      { "a(1)(1260)-"       ,   -20213,    1.0e-20    },
      { "eta(1295)0"        ,    20221,    1.0e-20    },
      { "f(1)(1285)0"       ,    20223,    1.0e-20    },
      { "f(2)(2010)0"       ,    20225,    1.0e-20    },
      { "K(1)(1400)0"       ,    20313,    1.0e-20    },
      { "K(1)(1400)0 bar"   ,   -20313,    1.0e-20    },
      { "K(2)(1820)0"       ,    20315,    1.0e-20    },
      { "K(2)(1820)0 bar"   ,   -20315,    1.0e-20    },
      { "K(1)(1400)+"       ,    20323,    1.0e-20    },
      { "K(1)(1400)-"       ,   -20323,    1.0e-20    },
      { "K(2)(1820)+"       ,    20325,    1.0e-20    },
      { "K(2)(1820)-"       ,   -20325,    1.0e-20    },
      { "psi(2S)0"          ,    20443,    1.0e-20    },
      { "Upsilon(2S)0"      ,    20553,    1.0e-20    },
      { "Delta(1910)-"      ,    21112,    1.0e-20    },
      { "Delta(1910)+ bar"  ,   -21112,    1.0e-20    },
      { "Delta(1920)-"      ,    21114,    1.0e-20    },
      { "Delta(1920)+ bar"  ,   -21114,    1.0e-20    },
      { "Delta(1910)0"      ,    21212,    1.0e-20    },
      { "Delta(1910)0 bar"  ,   -21212,    1.0e-20    },
      { "N(1700)0"          ,    21214,    1.0e-20    },
      { "N(1700)0 bar"      ,   -21214,    1.0e-20    },
      { "N(1535)0"          ,    22112,    1.0e-20    },
      { "N(1535)0 bar"      ,   -22112,    1.0e-20    },
      { "Delta(1920)0"      ,    22114,    1.0e-20    },
      { "Delta(1920)0 bar"  ,   -22114,    1.0e-20    },
      { "Delta(1910)+"      ,    22122,    1.0e-20    },
      { "Delta(1910)- bar"  ,   -22122,    1.0e-20    },
      { "N(1700)+"          ,    22124,    1.0e-20    },
      { "N(1700)- bar"      ,   -22124,    1.0e-20    },
      { "N(1535)+"          ,    22212,    1.0e-20    },
      { "N(1535)- bar"      ,   -22212,    1.0e-20    },
      { "Delta(1920)+"      ,    22214,    1.0e-20    },
      { "Delta(1920)- bar"  ,   -22214,    1.0e-20    },
      { "Delta(1910)++"     ,    22222,    1.0e-20    },
      { "Delta(1910)-- bar" ,   -22222,    1.0e-20    },
      { "Delta(1920)++"     ,    22224,    1.0e-20    },
      { "Delta(1920)-- bar" ,   -22224,    1.0e-20    },
      { "Sigma(1750)-"      ,    23112,    1.0e-20    },
      { "Sigma(1750)+ bar"  ,   -23112,    1.0e-20    },
      { "Sigma(1940)-"      ,    23114,    1.0e-20    },
      { "Sigma(1940)+ bar"  ,   -23114,    1.0e-20    },
      { "Lambda(1600)0"     ,    23122,    1.0e-20    },
      { "Lambda(1600)0 bar" ,   -23122,    1.0e-20    },
      { "Lambda(1890)0"     ,    23124,    1.0e-20    },
      { "Lambda(1890)0 bar" ,   -23124,    1.0e-20    },
      { "Lambda(2110)0"     ,    23126,    1.0e-20    },
      { "Lambda(2110)0 bar" ,   -23126,    1.0e-20    },
      { "Sigma(1750)0"      ,    23212,    1.0e-20    },
      { "Sigma(1750)0 bar"  ,   -23212,    1.0e-20    },
      { "Sigma(1940)0"      ,    23214,    1.0e-20    },
      { "Sigma(1940)0 bar"  ,   -23214,    1.0e-20    },
      { "Sigma(1750)+"      ,    23222,    1.0e-20    },
      { "Sigma(1750)- bar"  ,   -23222,    1.0e-20    },
      { "Sigma(1940)+"      ,    23224,    1.0e-20    },
      { "Sigma(1940)- bar"  ,   -23224,    1.0e-20    },
      { "rho(1700)0"        ,    30113,    1.0e-20    },
      { "rho(1700)+"        ,    30213,    1.0e-20    },
      { "rho(1700)-"        ,   -30213,    1.0e-20    },
      { "f(1)(1420)0"       ,    30223,    1.0e-20    },
      { "f(2)(2300)0"       ,    30225,    1.0e-20    },
      { "K*(1410)0"         ,    30313,    1.0e-20    },
      { "K*(1410)0 bar"     ,   -30313,    1.0e-20    },
      { "K*(1410)+"         ,    30323,    1.0e-20    },
      { "K*(1410)-"         ,   -30323,    1.0e-20    },
      { "psi(3770)0"        ,    30443,    1.0e-20    },
      { "Upsilon(3S)0"      ,    30553,    1.0e-20    },
      { "Delta(1600)-"      ,    31114,    1.0e-20    },
      { "Delta(1600)+ bar"  ,   -31114,    1.0e-20    },
      { "N(1720)0"          ,    31214,    1.0e-20    },
      { "N(1720)0 bar"      ,   -31214,    1.0e-20    },
      { "N(1650)0"          ,    32112,    1.0e-20    },
      { "N(1650)0 bar"      ,   -32112,    1.0e-20    },
      { "Delta(1600)0"      ,    32114,    1.0e-20    },
      { "Delta(1600)0 bar"  ,   -32114,    1.0e-20    },
      { "N(1720)+"          ,    32124,    1.0e-20    },
      { "N(1720)- bar"      ,   -32124,    1.0e-20    },
      { "N(1650)+"          ,    32212,    1.0e-20    },
      { "N(1650)- bar"      ,   -32212,    1.0e-20    },
      { "Delta(1600)+"      ,    32214,    1.0e-20    },
      { "Delta(1600)- bar"  ,   -32214,    1.0e-20    },
      { "Delta(1600)++"     ,    32224,    1.0e-20    },
      { "Delta(1600)-- bar" ,   -32224,    1.0e-20    },
      { "Lambda(1670)0"     ,    33122,    1.0e-20    },
      { "Lambda(1670)0 bar" ,   -33122,    1.0e-20    },
      { "rho(1450)0"        ,    40113,    1.0e-20    },
      { "rho(1450)+"        ,    40213,    1.0e-20    },
      { "rho(1450)-"        ,   -40213,    1.0e-20    },
      { "eta(1440)0"        ,    40221,    1.0e-20    },
      { "f(1)(1510)0"       ,    40223,    1.0e-20    },
      { "f(2)(2340)0"       ,    40225,    1.0e-20    },
      { "K*(1680)0"         ,    40313,    1.0e-20    },
      { "K*(1680)0 bar"     ,   -40313,    1.0e-20    },
      { "K*(1680)+"         ,    40323,    1.0e-20    },
      { "K*(1680)-"         ,   -40323,    1.0e-20    },
      { "psi(4040)0"        ,    40443,    1.0e-20    },
      { "Upsilon(4S)0"      ,    40553,    1.0e-20    },
      { "N(1710)0"          ,    42112,    1.0e-20    },
      { "N(1710)0 bar"      ,   -42112,    1.0e-20    },
      { "N(1710)+"          ,    42212,    1.0e-20    },
      { "N(1710)- bar"      ,   -42212,    1.0e-20    },
      { "Lambda(1800)0"     ,    43122,    1.0e-20    },
      { "Lambda(1800)0 bar" ,   -43122,    1.0e-20    },
      { "f(0)(1590)0"       ,    50221,    1.0e-20    },
      { "omega(1420)0"      ,    50223,    1.0e-20    },
      { "psi(4160)0"        ,    50443,    1.0e-20    },
      { "Upsilon(10860)0"   ,    50553,    1.0e-20    },
      { "Lambda(1810)0"     ,    53122,    1.0e-20    },
      { "Lambda(1810)0 bar" ,   -53122,    1.0e-20    },
      { "f(J)(1710)0"       ,    60221,    1.0e-20    },
      { "omega(1600)0"      ,    60223,    1.0e-20    },
      { "psi(4415)0"        ,    60443,    1.0e-20    },
      { "Upsilon(11020)0"   ,    60553,    1.0e-20    },
      { "chi(b1)(2P)0"      ,    70553,    1.0e-20    },
      { "Rootino"           ,    0,        1.0e-20    }
};  

#define total_defs 414

