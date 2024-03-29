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
    #include "DECGPiSquare_Const.h"
    #ifdef __cplusplus
}
#endif
/* ptolemy.cg.kernel.generic.program.procedural.c.CCodeGenerator
Variable declaration code */
/* ptolemy.cg.kernel.generic.program.procedural.c.CCodeGenerator
end variable declaration code */
#ifdef __cplusplus
extern "C" {
    #endif
    static struct TypedIOPort* trigger;
    static struct TypedIOPort* output;
    void DECGPiSquare_Const_preinitialize(struct AtomicActor* actor);
    void DECGPiSquare_Const_initialize(struct AtomicActor* actor);
    bool DECGPiSquare_Const_prefire(struct AtomicActor* actor);
    void DECGPiSquare_Const_fire(struct AtomicActor* actor);
    bool DECGPiSquare_Const_postfire(struct AtomicActor* actor);
    void DECGPiSquare_Const_wrapup(struct AtomicActor* actor);
    struct AtomicActor* DECGPiSquare_Const_New() {
        struct AtomicActor* DECGPiSquare_Const = AtomicActor_New();
        #ifdef _debugging
        ((struct AtomicActor*)DECGPiSquare_Const)->setName((struct AtomicActor *)DECGPiSquare_Const, "Const");
        #endif
        DECGPiSquare_Const->container = DECGPiSquare;
        DECGPiSquare_Const->preinitialize = DECGPiSquare_Const_preinitialize;
        DECGPiSquare_Const->initialize = DECGPiSquare_Const_initialize;
        DECGPiSquare_Const->prefire = DECGPiSquare_Const_prefire;
        DECGPiSquare_Const->fire = DECGPiSquare_Const_fire;
        DECGPiSquare_Const->postfire = DECGPiSquare_Const_postfire;
        DECGPiSquare_Const->wrapup = DECGPiSquare_Const_wrapup;
        trigger = (struct TypedIOPort*)TypedIOPort_New();
        #ifdef _debugging
        trigger->setName((struct IOPort*)trigger, "trigger");
        #endif
        trigger->container = (struct Actor*)DECGPiSquare_Const;
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
        pblListAdd(DECGPiSquare_Const->_inputPorts, trigger);
        PblList* trigger_0 = pblListNewArrayList();
        struct DEReceiver* trigger_0_0 = DEReceiver_New();
        trigger_0_0->container = (struct IOPort*)trigger;
        trigger_0_0->_director = (struct DEDirector*)(*(DECGPiSquare_Const->getDirector))(DECGPiSquare_Const);
        pblListAdd(trigger_0, trigger_0_0);
        pblListAdd(trigger->_localReceivers , trigger_0);
        output = (struct TypedIOPort*)TypedIOPort_New();
        #ifdef _debugging
        output->setName((struct IOPort*)output, "output");
        #endif
        output->container = (struct Actor*)DECGPiSquare_Const;
        output->_isInsideConnected = false;
        output->_isOutsideConnected = true;
        output->_isInput = false;
        output->_isOutput = true;
        output->_isMultiport = false;
        output->_width = 1;
        output->_insideWidth = 0;
        output->_numberOfSinks = 1;
        output->_numberOfSources = 0;
        output->_type = TYPE_Double;
        pblListAdd(DECGPiSquare_Const->_outputPorts, output);
        PblList* output__0 = pblListNewArrayList();
        pblListAdd(output->_farReceivers, output__0);
        return DECGPiSquare_Const;
    }
    struct IOPort* DECGPiSquare_Const_get_trigger() {
        return (struct IOPort*) trigger;
    }
    struct IOPort* DECGPiSquare_Const_get_output() {
        return (struct IOPort*) output;
    }
    void DECGPiSquare_Const_preinitialize(struct AtomicActor* actor) {
        /* ptolemy.cg.kernel.generic.program.procedural.c.CCodeGenerator
        Preinitalization of the actor : DECGPiSquare_Const */
    }/* ptolemy.cg.kernel.generic.program.procedural.c.CCodeGenerator
    End of the preinitalization of the actor : DECGPiSquare_Const */
    void DECGPiSquare_Const_initialize(struct AtomicActor* actor) {
        /* ptolemy.cg.kernel.generic.program.procedural.c.CCodeGenerator
        Initalization of the actor : DECGPiSquare_Const */
    }/* ptolemy.cg.kernel.generic.program.procedural.c.CCodeGenerator
    End of the initalization of the actor : DECGPiSquare_Const */
    bool DECGPiSquare_Const_prefire(struct AtomicActor* actor) {
        /* ptolemy.cg.kernel.generic.program.procedural.c.CCodeGenerator
        prefire of the actor : DECGPiSquare_Const */
        return true;
    }/* ptolemy.cg.kernel.generic.program.procedural.c.CCodeGenerator
    End of the prefire of the actor : DECGPiSquare_Const */
    #ifdef __cplusplus
}
#endif
void DECGPiSquare_Const_fire(struct AtomicActor* actor) {
    (*(output->send))((struct IOPort*) output, 0, Double_new(6.0));
}
#ifdef __cplusplus
extern "C" {
    #endif
    bool DECGPiSquare_Const_postfire(struct AtomicActor* actor) {
        /* ptolemy.cg.kernel.generic.program.procedural.c.CCodeGenerator
        Postfire of the actor : DECGPiSquare_Const */
        return true;
    }/* ptolemy.cg.kernel.generic.program.procedural.c.CCodeGenerator
    End of the postfire of the actor : DECGPiSquare_Const */
    void DECGPiSquare_Const_wrapup(struct AtomicActor* actor) {
        /* ptolemy.cg.kernel.generic.program.procedural.c.CCodeGenerator
        Wrapup of the actor : DECGPiSquare_Const */
    }/* ptolemy.cg.kernel.generic.program.procedural.c.CCodeGenerator
    End of the wrapup of the actor : DECGPiSquare_Const */
    #ifdef __cplusplus
}
#endif
