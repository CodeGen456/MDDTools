/* ptolemy.cg.kernel.generic.GenericCodeGenerator
Generated by Ptolemy II (http://ptolemy.eecs.berkeley.edu)
Copyright (c) 2005-2016 The Regents of the University of California.
All rights reserved.
Permission is hereby granted, without written agreement and without
license or royalty fees, to use, copy, modify, and distribute this
software and its documentation for any purpose, provided that the above
copyright notice and the following two paragraphs appear in all copies
of this software.
IN NO EVENT SHALL THE UNIVERSITY OF CALIFORNIA BE LIABLE TO ANY PARTY
FOR DIRECT, INDIRECT, SPECIAL, INCIDENTAL, OR CONSEQUENTIAL DAMAGES
ARISING OUT OF THE USE OF THIS SOFTWARE AND ITS DOCUMENTATION, EVEN IF
THE UNIVERSITY OF CALIFORNIA HAS BEEN ADVISED OF THE POSSIBILITY OF
SUCH DAMAGE.
THE UNIVERSITY OF CALIFORNIA SPECIFICALLY DISCLAIMS ANY WARRANTIES,
INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE. THE SOFTWARE
PROVIDED HEREUNDER IS ON AN "AS IS" BASIS, AND THE UNIVERSITY OF
CALIFORNIA HAS NO OBLIGATION TO PROVIDE MAINTENANCE, SUPPORT, UPDATES,
ENHANCEMENTS, OR MODIFICATIONS.
*/
#ifndef _DECGMATH_H_
#define _DECGMATH_H_
#include "_CompositeActor.h"
#include "_AtomicActor.h"
#include "_DEDirector.h"
#include "DECGMath_Display.h"
#include "DECGMath_DiscreteClock.h"
#include "DECGMath_Ramp.h"
#include "DECGMath_MultiplyDivide.h"
#include "DECGMath_Const.h"
#include "DECGMath_Const2.h"
#include "DECGMath_MultiplyDivide2.h"
#include "DECGMath_AddSubtract.h"
#ifdef __cplusplus
extern "C" {
    #endif
    extern struct CompositeActor* DECGMath;
    extern struct CompositeActor* DECGMath_New();
    extern struct AtomicActor* DECGMath_Display;
    extern struct AtomicActor* DECGMath_DiscreteClock;
    extern struct AtomicActor* DECGMath_Ramp;
    extern struct AtomicActor* DECGMath_MultiplyDivide;
    extern struct AtomicActor* DECGMath_Const;
    extern struct AtomicActor* DECGMath_Const2;
    extern struct AtomicActor* DECGMath_MultiplyDivide2;
    extern struct AtomicActor* DECGMath_AddSubtract;
    #ifdef __cplusplus
}
#endif
#endif /* DECGMATH */
