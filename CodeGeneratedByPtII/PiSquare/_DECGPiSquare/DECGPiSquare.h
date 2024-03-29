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
#ifndef _DECGPISQUARE_H_
#define _DECGPISQUARE_H_
#include "_CompositeActor.h"
#include "_AtomicActor.h"
#include "_DEDirector.h"
#include "DECGPiSquare_Display.h"
#include "DECGPiSquare_Ramp.h"
#include "DECGPiSquare_MultiplyDivide.h"
#include "DECGPiSquare_Const.h"
#include "DECGPiSquare_Accumulator.h"
#include "DECGPiSquare_DiscreteClock.h"
#ifdef __cplusplus
extern "C" {
    #endif
    extern struct CompositeActor* DECGPiSquare;
    extern struct CompositeActor* DECGPiSquare_New();
    extern struct AtomicActor* DECGPiSquare_Display;
    extern struct AtomicActor* DECGPiSquare_Ramp;
    extern struct AtomicActor* DECGPiSquare_MultiplyDivide;
    extern struct AtomicActor* DECGPiSquare_Const;
    extern struct AtomicActor* DECGPiSquare_Accumulator;
    extern struct AtomicActor* DECGPiSquare_DiscreteClock;
    #ifdef __cplusplus
}
#endif
#endif /* DECGPISQUARE */
