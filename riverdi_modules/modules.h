/*
 * Copyright (c) Riverdi Sp. z o.o. sp. k. <riverdi@riverdi.com>
 * Copyright (c) Skalski Embedded Technologies <contact@lukasz-skalski.com>
 */

#ifndef _MODULES_H_
#define _MODULES_H_

/*
 * Embedded Video Engine Series
 */
#define EVE_4_INTERNAL_OSC
#define BT81X_ENABLE



/*
 * Definitions for Riverdi Intelligent Modules
 */

#if defined (NTP_43) || defined (RTP_43) || defined (CTP_43)
  #define DispWidth      480L
  #define DispHeight     272L
  #define DispHCycle     548L
  #define DispHOffset    43L
  #define DispHSync0     0L
  #define DispHSync1     41L
  #define DispVCycle     292L
  #define DispVOffset    12L
  #define DispVSync0     0L
  #define DispVSync1     10L
  #define DispPCLK       3
  #define DispSwizzle    0
  #define DispPCLKPol    1
  #define DispCSpread    0
  #define DispDither     1
#elif defined (IPS_43)
  #define DispWidth      480L
  #define DispHeight     272L
  #define DispHCycle     531L
  #define DispHOffset    43L
  #define DispHSync0     0L
  #define DispHSync1     4L
  #define DispVCycle     292L
  #define DispVOffset    12L
  #define DispVSync0     0L
  #define DispVSync1     4L
  #define DispPCLK       1
  #define DispSwizzle    0
  #define DispPCLKPol    1
  #define DispCSpread    0
  #define DispDither     0
  #define DispPLCLKFREQ  0x232
  #define DispPCLK2x	 0
#endif

#endif /*_MODULES_H_*/
