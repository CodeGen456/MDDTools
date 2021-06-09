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
    #include "DECGMath_MultiplyDivide2.h"
    #ifdef __cplusplus
}
#endif
/* ptolemy.cg.kernel.generic.program.procedural.c.CCodeGenerator
Variable declaration code */
/* ptolemy.cg.adapter.generic.program.procedural.adapters.ptolemy.actor.lib.MultiplyDivide
preinitialize MultiplyDivide2 */
int DECGMath_MultiplyDivide2__result;
/* ptolemy.cg.kernel.generic.program.procedural.c.CCodeGenerator
end variable declaration code */
#ifdef __cplusplus
extern "C" {
    #endif
    static struct TypedIOPort* multiply;
    static struct TypedIOPort* output;
    void DECGMath_MultiplyDivide2_preinitialize(struct AtomicActor* actor);
    void DECGMath_MultiplyDivide2_initialize(struct AtomicActor* actor);
    bool DECGMath_MultiplyDivide2_prefire(struct AtomicActor* actor);
    void DECGMath_MultiplyDivide2_fire(struct AtomicActor* actor);
    bool DECGMath_MultiplyDivide2_postfire(struct AtomicActor* actor);
    void DECGMath_MultiplyDivide2_wrapup(struct AtomicActor* actor);
    struct AtomicActor* DECGMath_MultiplyDivide2_New() {
        struct AtomicActor* DECGMath_MultiplyDivide2 = AtomicActor_New();
        #ifdef _debugging
        ((struct AtomicActor*)DECGMath_MultiplyDivide2)->setName((struct AtomicActor *)DECGMath_MultiplyDivide2, "MultiplyDivide2");
        #endif
        DECGMath_MultiplyDivide2->container = DECGMath;
        DECGMath_MultiplyDivide2->preinitialize = DECGMath_MultiplyDivide2_preinitialize;
        DECGMath_MultiplyDivide2->initialize = DECGMath_MultiplyDivide2_initialize;
        DECGMath_MultiplyDivide2->prefire = DECGMath_MultiplyDivide2_prefire;
        DECGMath_MultiplyDivide2->fire = DECGMath_MultiplyDivide2_fire;
        DECGMath_MultiplyDivide2->postfire = DECGMath_MultiplyDivide2_postfire;
        DECGMath_MultiplyDivide2->wrapup = DECGMath_MultiplyDivide2_wrapup;
        multiply = (struct TypedIOPort*)TypedIOPort_New();
        #ifdef _debugging
        multiply->setName((struct IOPort*)multiply, "multiply");
        #endif
        multiply->container = (struct Actor*)DECGMath_MultiplyDivide2;
        multiply->_isInsideConnected = false;
        multiply->_isOutsideConnected = true;
        multiply->_isInput = true;
        multiply->_isOutput = false;
        multiply->_isMultiport = true;
        multiply->_width = 2;
        multiply->_insideWidth = 0;
        multiply->_numberOfSinks = 2;
        multiply->_numberOfSources = 2;
        multiply->_type = TYPE_Int;
        pblListAdd(DECGMath_MultiplyDivide2->_inputPorts, multiply);
        PblList* multiply_0 = pblListNewArrayList();
        struct DEReceiver* multiply_0_0 = DEReceiver_New();
        multiply_0_0->container = (struct IOPort*)multiply;
        multiply_0_0->_director = (struct DEDirector*)(*(DECGMath_MultiplyDivide2->getDirector))(DECGMath_MultiplyDivide2);
        pblListAdd(multiply_0, multiply_0_0);
        pblListAdd(multiply->_localReceivers , multiply_0);
        PblList* multiply_1 = pblListNewArrayList();
        struct DEReceiver* multiply_1_0 = DEReceiver_New();
        multiply_1_0->container = (struct IOPort*)multiply;
        multiply_1_0->_director = (struct DEDirector*)(*(DECGMath_MultiplyDivide2->getDirector))(DECGMath_MultiplyDivide2);
        pblListAdd(multiply_1, multiply_1_0);
        pblListAdd(multiply->_localReceivers , multiply_1);
        output = (struct TypedIOPort*)TypedIOPort_New();
        #ifdef _debugging
        output->setName((struct IOPort*)output, "output");
        #endif
        output->container = (struct Actor*)DECGMath_MultiplyDivide2;
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
        pblListAdd(DECGMath_MultiplyDivide2->_outputPorts, output);
        PblList* output__0 = pblListNewArrayList();
        pblListAdd(output->_farReceivers, output__0);
        return DECGMath_MultiplyDivide2;
    }
    struct IOPort* DECGMath_MultiplyDivide2_get_multiply() {
        return (struct IOPort*) multiply;
    }
    struct IOPort* DECGMath_MultiplyDivide2_get_output() {
        return (struct IOPort*) output;
    }
    void DECGMath_MultiplyDivide2_preinitialize(struct AtomicActor* actor) {
        /* ptolemy.cg.kernel.generic.program.procedural.c.CCodeGenerator
        Preinitalization of the actor : DECGMath_MultiplyDivide2 */
    }/* ptolemy.cg.kernel.generic.program.procedural.c.CCodeGenerator
    End of the preinitalization of the actor : DECGMath_MultiplyDivide2 */
    void DECGMath_MultiplyDivide2_initialize(struct AtomicActor* actor) {
        /* ptolemy.cg.kernel.generic.program.procedural.c.CCodeGenerator
        Initalization of the actor : DECGMath_MultiplyDivide2 */
    }/* ptolemy.cg.kernel.generic.program.procedural.c.CCodeGenerator
    End of the initalization of the actor : DECGMath_MultiplyDivide2 */
    bool DECGMath_MultiplyDivide2_prefire(struct AtomicActor* actor) {
        /* ptolemy.cg.kernel.generic.program.procedural.c.CCodeGenerator
        prefire of the actor : DECGMath_MultiplyDivide2 */
        return true;
    }/* ptolemy.cg.kernel.generic.program.procedural.c.CCodeGenerator
    End of the prefire of the actor : DECGMath_MultiplyDivide2 */
    #ifdef __cplusplus
}
#endif
void DECGMath_MultiplyDivide2_fire(struct AtomicActor* actor) {
    if ((*(multiply->hasToken))((struct IOPort*) multiply, 0)) {
        DECGMath_MultiplyDivide2__result = convert_Int_Int((*(multiply->get))((struct IOPort*) multiply, 0)->payload.Int);
    }
    else {
        DECGMath_MultiplyDivide2__result = convert_Int_Int(1);
    }
    if ((*(multiply->hasToken))((struct IOPort*) multiply, 1)) {
        DECGMath_MultiplyDivide2__result = multiply_Int_Int(DECGMath_MultiplyDivide2__result, (*(multiply->get))((struct IOPort*) multiply, 1)->payload.Int);
    }
    (*(output->send))((struct IOPort*) output, 0, Int_new(DECGMath_MultiplyDivide2__result));
}
#ifdef __cplusplus
extern "C" {
    #endif
    bool DECGMath_MultiplyDivide2_postfire(struct AtomicActor* actor) {
        /* ptolemy.cg.kernel.generic.program.procedural.c.CCodeGenerator
        Postfire of the actor : DECGMath_MultiplyDivide2 */
        return true;
    }/* ptolemy.cg.kernel.generic.program.procedural.c.CCodeGenerator
    End of the postfire of the actor : DECGMath_MultiplyDivide2 */
    void DECGMath_MultiplyDivide2_wrapup(struct AtomicActor* actor) {
        /* ptolemy.cg.kernel.generic.program.procedural.c.CCodeGenerator
        Wrapup of the actor : DECGMath_MultiplyDivide2 */
    }/* ptolemy.cg.kernel.generic.program.procedural.c.CCodeGenerator
    End of the wrapup of the actor : DECGMath_MultiplyDivide2 */
    #ifdef __cplusplus
}
#endif