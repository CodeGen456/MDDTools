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
#ifdef __cplusplus
extern "C" {
    #endif
    #include "DECGMath_DiscreteClock.h"
    #ifdef __cplusplus
}
#endif
/* ptolemy.cg.kernel.generic.program.procedural.c.CCodeGenerator
Variable declaration code */
/* ptolemy.cg.kernel.generic.program.ProgramCodeGeneratorAdapter
preinitDiscreteClock */
int DECGMath_DiscreteClock__phase;
Time DECGMath_DiscreteClock__period;
Time DECGMath_DiscreteClock__cycleStartTime;
Time DECGMath_DiscreteClock__stopTime;
int * DECGMath_DiscreteClock__values;
Time * DECGMath_DiscreteClock__offsets;
int DECGMath_DiscreteClock__offsetsNumber;
boolean DECGMath_DiscreteClock__enabled;
boolean DECGMath_DiscreteClock__triggered;
Time DECGMath_DiscreteClock__nextOutputTime;
int DECGMath_DiscreteClock__nextOutputIndex;
boolean DECGMath_DiscreteClock__outputProduced;
/* ptolemy.cg.kernel.generic.program.procedural.c.CCodeGenerator
end variable declaration code */
#ifdef __cplusplus
extern "C" {
    #endif
    static struct TypedIOPort* output;
    void DECGMath_DiscreteClock_preinitialize(struct AtomicActor* actor);
    void DECGMath_DiscreteClock_initialize(struct AtomicActor* actor);
    bool DECGMath_DiscreteClock_prefire(struct AtomicActor* actor);
    void DECGMath_DiscreteClock_fire(struct AtomicActor* actor);
    bool DECGMath_DiscreteClock_postfire(struct AtomicActor* actor);
    void DECGMath_DiscreteClock_wrapup(struct AtomicActor* actor);
    struct AtomicActor* DECGMath_DiscreteClock_New() {
        struct AtomicActor* DECGMath_DiscreteClock = AtomicActor_New();
        #ifdef _debugging
        ((struct AtomicActor*)DECGMath_DiscreteClock)->setName((struct AtomicActor *)DECGMath_DiscreteClock, "DiscreteClock");
        #endif
        DECGMath_DiscreteClock->container = DECGMath;
        DECGMath_DiscreteClock->preinitialize = DECGMath_DiscreteClock_preinitialize;
        DECGMath_DiscreteClock->initialize = DECGMath_DiscreteClock_initialize;
        DECGMath_DiscreteClock->prefire = DECGMath_DiscreteClock_prefire;
        DECGMath_DiscreteClock->fire = DECGMath_DiscreteClock_fire;
        DECGMath_DiscreteClock->postfire = DECGMath_DiscreteClock_postfire;
        DECGMath_DiscreteClock->wrapup = DECGMath_DiscreteClock_wrapup;
        output = (struct TypedIOPort*)TypedIOPort_New();
        #ifdef _debugging
        output->setName((struct IOPort*)output, "output");
        #endif
        output->container = (struct Actor*)DECGMath_DiscreteClock;
        output->_isInsideConnected = false;
        output->_isOutsideConnected = true;
        output->_isInput = false;
        output->_isOutput = true;
        output->_isMultiport = false;
        output->_width = 1;
        output->_insideWidth = 0;
        output->_numberOfSinks = 1;
        output->_numberOfSources = 0;
        output->_type = TYPE_Int;
        pblListAdd(DECGMath_DiscreteClock->_outputPorts, output);
        PblList* output__0 = pblListNewArrayList();
        pblListAdd(output->_farReceivers, output__0);
        return DECGMath_DiscreteClock;
    }
    struct IOPort* DECGMath_DiscreteClock_get_output() {
        return (struct IOPort*) output;
    }
    void DECGMath_DiscreteClock_preinitialize(struct AtomicActor* actor) {
        /* ptolemy.cg.kernel.generic.program.procedural.c.CCodeGenerator
        Preinitalization of the actor : DECGMath_DiscreteClock */
    }/* ptolemy.cg.kernel.generic.program.procedural.c.CCodeGenerator
    End of the preinitalization of the actor : DECGMath_DiscreteClock */
    void DECGMath_DiscreteClock_initialize(struct AtomicActor* actor) {
        /* ptolemy.cg.kernel.generic.program.procedural.c.CCodeGenerator
        Initalization of the actor : DECGMath_DiscreteClock */
        DECGMath_DiscreteClock__offsetsNumber = 1;
        DECGMath_DiscreteClock__offsets = calloc(1, sizeof(Time));
        DECGMath_DiscreteClock__offsets[0] = 0.0;
        DECGMath_DiscreteClock__values = calloc(1, sizeof(TYPE_Int));
        DECGMath_DiscreteClock__values[0] = 1;
        DECGMath_DiscreteClock__period = 1.0;
        DECGMath_DiscreteClock__phase = 0;
        DECGMath_DiscreteClock__enabled = true;
        DECGMath_DiscreteClock__triggered = true;
        DECGMath_DiscreteClock__outputProduced = false;
        DECGMath_DiscreteClock__stopTime = 10.0;
        struct Director* director = (*(actor->getDirector))(actor);
        DECGMath_DiscreteClock__cycleStartTime = (*(director->getModelTime))(director);
        DECGMath_DiscreteClock__nextOutputTime = DECGMath_DiscreteClock__cycleStartTime + DECGMath_DiscreteClock__offsets[DECGMath_DiscreteClock__phase];
        DECGMath_DiscreteClock__nextOutputIndex = 1;
        (*(director->fireAt))(director, (struct Actor*)actor, DECGMath_DiscreteClock__nextOutputTime, DECGMath_DiscreteClock__nextOutputIndex);
    }/* ptolemy.cg.kernel.generic.program.procedural.c.CCodeGenerator
    End of the initalization of the actor : DECGMath_DiscreteClock */
    bool DECGMath_DiscreteClock_prefire(struct AtomicActor* actor) {
        /* ptolemy.cg.kernel.generic.program.procedural.c.CCodeGenerator
        prefire of the actor : DECGMath_DiscreteClock */
        return true;
    }/* ptolemy.cg.kernel.generic.program.procedural.c.CCodeGenerator
    End of the prefire of the actor : DECGMath_DiscreteClock */
    #ifdef __cplusplus
}
#endif
void DECGMath_DiscreteClock_fire(struct AtomicActor* actor) {
    if (!DECGMath_DiscreteClock__enabled) {
        // if the clock is disabled
        return;
    }
    struct Director* director = (*(actor->getDirector))(actor);
    double comparison = DECGMath_DiscreteClock__nextOutputTime - (*(director->getModelTime))(director);
    if (comparison > 0) {
        return;
    } else if (comparison == 0) {
        // It is the right time to produce an output. Check
        // the index.
        if (DECGMath_DiscreteClock__nextOutputIndex > (*(((struct DEDirector*)director)->getMicrostep))((struct DEDirector*)director)) {
            // We have not yet reached the requisite index.
            // Request another firing at the current time.
            (*(director->fireAt))(director, (struct Actor*)actor, (*(director->getModelTime))(director),
            (*(((struct DEDirector*)director)->getMicrostep))((struct DEDirector*)director) + 1);
            return;
        }
        // At this point, the time matches the next output, and
        // the index either matches or exceeds the index for the next output,
        // or the director does not support superdense time.
        if (!DECGMath_DiscreteClock__triggered) {
            // Pretend we produced an output so that postfire() will
            // skip to the next phase.
            DECGMath_DiscreteClock__outputProduced = true;
            return;
        }
        // Ready to fire.
        if (DECGMath_DiscreteClock__enabled) {
            (*(output->send))((struct IOPort*) output, 0, Int_new(DECGMath_DiscreteClock__values[DECGMath_DiscreteClock__phase]));
            DECGMath_DiscreteClock__outputProduced = true;
        }
        return;
    }
}
#ifdef __cplusplus
extern "C" {
    #endif
    bool DECGMath_DiscreteClock_postfire(struct AtomicActor* actor) {
        /* ptolemy.cg.kernel.generic.program.procedural.c.CCodeGenerator
        Postfire of the actor : DECGMath_DiscreteClock */
        struct Director* director = (*(actor->getDirector))(actor);
        if ((*(director->getModelTime))(director) > DECGMath_DiscreteClock__stopTime) {
            return true;
        }
        if (DECGMath_DiscreteClock__outputProduced) {
            DECGMath_DiscreteClock__phase++;
            if (DECGMath_DiscreteClock__phase >= DECGMath_DiscreteClock__offsetsNumber) {
                DECGMath_DiscreteClock__phase = 0;
                DECGMath_DiscreteClock__cycleStartTime += DECGMath_DiscreteClock__period;
            }
            if (DECGMath_DiscreteClock__offsets[DECGMath_DiscreteClock__phase] > DECGMath_DiscreteClock__period) {
                perror("An offset of the Discrete Clock is greater than the period !");
                exit(1);
            }
            Time nextOutputTime = DECGMath_DiscreteClock__cycleStartTime + DECGMath_DiscreteClock__offsets[DECGMath_DiscreteClock__phase];
            if (DECGMath_DiscreteClock__nextOutputTime == nextOutputTime) {
                DECGMath_DiscreteClock__nextOutputIndex++;
            } else {
                DECGMath_DiscreteClock__nextOutputTime = nextOutputTime;
                DECGMath_DiscreteClock__nextOutputIndex = 1;
            }
            (*(director->fireAt))(director, (struct Actor*)actor, DECGMath_DiscreteClock__nextOutputTime,
            DECGMath_DiscreteClock__nextOutputIndex);
            DECGMath_DiscreteClock__outputProduced = false;
            if (false) {
                DECGMath_DiscreteClock__triggered = false;
            }
        }
        return true;
        return true;
    }/* ptolemy.cg.kernel.generic.program.procedural.c.CCodeGenerator
    End of the postfire of the actor : DECGMath_DiscreteClock */
    void DECGMath_DiscreteClock_wrapup(struct AtomicActor* actor) {
        /* ptolemy.cg.kernel.generic.program.procedural.c.CCodeGenerator
        Wrapup of the actor : DECGMath_DiscreteClock */
        /* ptolemy.cg.kernel.generic.program.ProgramCodeGeneratorAdapter
        wrapupDiscreteClock */
        free(DECGMath_DiscreteClock__values);
        free(DECGMath_DiscreteClock__offsets);
    }/* ptolemy.cg.kernel.generic.program.procedural.c.CCodeGenerator
    End of the wrapup of the actor : DECGMath_DiscreteClock */
    #ifdef __cplusplus
}
#endif
