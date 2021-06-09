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
    #include "DECGPiSquare_Ramp.h"
    #ifdef __cplusplus
}
#endif
/* ptolemy.cg.kernel.generic.program.procedural.c.CCodeGenerator
Variable declaration code */
/* ptolemy.cg.kernel.generic.program.ProgramCodeGeneratorAdapter
preinitRamp */
int DECGPiSquare_Ramp__state;
/* ptolemy.cg.adapter.generic.program.procedural.c.adapters.ptolemy.domains.de.kernel.DEDirector
DECGPiSquare_DE_Director's referenced parameter declarations. */
int DECGPiSquare_Ramp_step_;
/* ptolemy.cg.kernel.generic.program.procedural.c.CCodeGenerator
end variable declaration code */
#ifdef __cplusplus
extern "C" {
    #endif
    static struct TypedIOPort* trigger;
    static struct TypedIOPort* output;
    void DECGPiSquare_Ramp_preinitialize(struct AtomicActor* actor);
    void DECGPiSquare_Ramp_initialize(struct AtomicActor* actor);
    bool DECGPiSquare_Ramp_prefire(struct AtomicActor* actor);
    void DECGPiSquare_Ramp_fire(struct AtomicActor* actor);
    bool DECGPiSquare_Ramp_postfire(struct AtomicActor* actor);
    void DECGPiSquare_Ramp_wrapup(struct AtomicActor* actor);
    struct AtomicActor* DECGPiSquare_Ramp_New() {
        struct AtomicActor* DECGPiSquare_Ramp = AtomicActor_New();
        #ifdef _debugging
        ((struct AtomicActor*)DECGPiSquare_Ramp)->setName((struct AtomicActor *)DECGPiSquare_Ramp, "Ramp");
        #endif
        DECGPiSquare_Ramp->container = DECGPiSquare;
        DECGPiSquare_Ramp->preinitialize = DECGPiSquare_Ramp_preinitialize;
        DECGPiSquare_Ramp->initialize = DECGPiSquare_Ramp_initialize;
        DECGPiSquare_Ramp->prefire = DECGPiSquare_Ramp_prefire;
        DECGPiSquare_Ramp->fire = DECGPiSquare_Ramp_fire;
        DECGPiSquare_Ramp->postfire = DECGPiSquare_Ramp_postfire;
        DECGPiSquare_Ramp->wrapup = DECGPiSquare_Ramp_wrapup;
        trigger = (struct TypedIOPort*)TypedIOPort_New();
        #ifdef _debugging
        trigger->setName((struct IOPort*)trigger, "trigger");
        #endif
        trigger->container = (struct Actor*)DECGPiSquare_Ramp;
        trigger->_isInsideConnected = false;
        trigger->_isOutsideConnected = true;
        trigger->_isInput = true;
        trigger->_isOutput = false;
        trigger->_isMultiport = true;
        trigger->_width = 1;
        trigger->_insideWidth = 0;
        trigger->_numberOfSinks = 1;
        trigger->_numberOfSources = 1;
        trigger->_type = TYPE_Int;
        pblListAdd(DECGPiSquare_Ramp->_inputPorts, trigger);
        PblList* trigger_0 = pblListNewArrayList();
        struct DEReceiver* trigger_0_0 = DEReceiver_New();
        trigger_0_0->container = (struct IOPort*)trigger;
        trigger_0_0->_director = (struct DEDirector*)(*(DECGPiSquare_Ramp->getDirector))(DECGPiSquare_Ramp);
        pblListAdd(trigger_0, trigger_0_0);
        pblListAdd(trigger->_localReceivers , trigger_0);
        output = (struct TypedIOPort*)TypedIOPort_New();
        #ifdef _debugging
        output->setName((struct IOPort*)output, "output");
        #endif
        output->container = (struct Actor*)DECGPiSquare_Ramp;
        output->_isInsideConnected = false;
        output->_isOutsideConnected = true;
        output->_isInput = false;
        output->_isOutput = true;
        output->_isMultiport = false;
        output->_width = 1;
        output->_insideWidth = 0;
        output->_numberOfSinks = 2;
        output->_numberOfSources = 0;
        output->_type = TYPE_Int;
        pblListAdd(DECGPiSquare_Ramp->_outputPorts, output);
        PblList* output__0 = pblListNewArrayList();
        pblListAdd(output->_farReceivers, output__0);
        return DECGPiSquare_Ramp;
    }
    struct IOPort* DECGPiSquare_Ramp_get_trigger() {
        return (struct IOPort*) trigger;
    }
    struct IOPort* DECGPiSquare_Ramp_get_output() {
        return (struct IOPort*) output;
    }
    void DECGPiSquare_Ramp_preinitialize(struct AtomicActor* actor) {
        /* ptolemy.cg.kernel.generic.program.procedural.c.CCodeGenerator
        Preinitalization of the actor : DECGPiSquare_Ramp */
        /* ptolemy.cg.adapter.generic.program.procedural.c.adapters.ptolemy.domains.de.kernel.DEDirector
        Ramp's parameter initialization */
        DECGPiSquare_Ramp_step_ = 1;
    }/* ptolemy.cg.kernel.generic.program.procedural.c.CCodeGenerator
    End of the preinitalization of the actor : DECGPiSquare_Ramp */
    void DECGPiSquare_Ramp_initialize(struct AtomicActor* actor) {
        /* ptolemy.cg.kernel.generic.program.procedural.c.CCodeGenerator
        Initalization of the actor : DECGPiSquare_Ramp */
        /* ptolemy.cg.adapter.generic.program.procedural.adapters.ptolemy.actor.lib.Ramp
        initialize Ramp */
        DECGPiSquare_Ramp__state = 1;
        DECGPiSquare_Ramp_step_ = 1;
    }/* ptolemy.cg.kernel.generic.program.procedural.c.CCodeGenerator
    End of the initalization of the actor : DECGPiSquare_Ramp */
    bool DECGPiSquare_Ramp_prefire(struct AtomicActor* actor) {
        /* ptolemy.cg.kernel.generic.program.procedural.c.CCodeGenerator
        prefire of the actor : DECGPiSquare_Ramp */
        return true;
    }/* ptolemy.cg.kernel.generic.program.procedural.c.CCodeGenerator
    End of the prefire of the actor : DECGPiSquare_Ramp */
    #ifdef __cplusplus
}
#endif
void DECGPiSquare_Ramp_fire(struct AtomicActor* actor) {
    (*(output->send))((struct IOPort*) output, 0, Int_new(DECGPiSquare_Ramp__state));
    if (false) {
        DECGPiSquare_Ramp_step_ = Int_new(0)->payload.Int;
    }
    DECGPiSquare_Ramp__state += (int)DECGPiSquare_Ramp_step_;
}
#ifdef __cplusplus
extern "C" {
    #endif
    bool DECGPiSquare_Ramp_postfire(struct AtomicActor* actor) {
        /* ptolemy.cg.kernel.generic.program.procedural.c.CCodeGenerator
        Postfire of the actor : DECGPiSquare_Ramp */
        return true;
    }/* ptolemy.cg.kernel.generic.program.procedural.c.CCodeGenerator
    End of the postfire of the actor : DECGPiSquare_Ramp */
    void DECGPiSquare_Ramp_wrapup(struct AtomicActor* actor) {
        /* ptolemy.cg.kernel.generic.program.procedural.c.CCodeGenerator
        Wrapup of the actor : DECGPiSquare_Ramp */
    }/* ptolemy.cg.kernel.generic.program.procedural.c.CCodeGenerator
    End of the wrapup of the actor : DECGPiSquare_Ramp */
    #ifdef __cplusplus
}
#endif