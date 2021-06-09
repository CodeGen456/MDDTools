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
    #include "DECGPiSquare_Accumulator.h"
    #ifdef __cplusplus
}
#endif
/* ptolemy.cg.kernel.generic.program.procedural.c.CCodeGenerator
Variable declaration code */
/* ptolemy.cg.kernel.generic.program.ProgramCodeGeneratorAdapter
preinitAccumulator */
double DECGPiSquare_Accumulator__sum;
/* ptolemy.cg.kernel.generic.program.procedural.c.CCodeGenerator
end variable declaration code */
#ifdef __cplusplus
extern "C" {
    #endif
    static struct TypedIOPort* input;
    static struct TypedIOPort* output;
    void DECGPiSquare_Accumulator_preinitialize(struct AtomicActor* actor);
    void DECGPiSquare_Accumulator_initialize(struct AtomicActor* actor);
    bool DECGPiSquare_Accumulator_prefire(struct AtomicActor* actor);
    void DECGPiSquare_Accumulator_fire(struct AtomicActor* actor);
    bool DECGPiSquare_Accumulator_postfire(struct AtomicActor* actor);
    void DECGPiSquare_Accumulator_wrapup(struct AtomicActor* actor);
    struct AtomicActor* DECGPiSquare_Accumulator_New() {
        struct AtomicActor* DECGPiSquare_Accumulator = AtomicActor_New();
        #ifdef _debugging
        ((struct AtomicActor*)DECGPiSquare_Accumulator)->setName((struct AtomicActor *)DECGPiSquare_Accumulator, "Accumulator");
        #endif
        DECGPiSquare_Accumulator->container = DECGPiSquare;
        DECGPiSquare_Accumulator->preinitialize = DECGPiSquare_Accumulator_preinitialize;
        DECGPiSquare_Accumulator->initialize = DECGPiSquare_Accumulator_initialize;
        DECGPiSquare_Accumulator->prefire = DECGPiSquare_Accumulator_prefire;
        DECGPiSquare_Accumulator->fire = DECGPiSquare_Accumulator_fire;
        DECGPiSquare_Accumulator->postfire = DECGPiSquare_Accumulator_postfire;
        DECGPiSquare_Accumulator->wrapup = DECGPiSquare_Accumulator_wrapup;
        input = (struct TypedIOPort*)TypedIOPort_New();
        #ifdef _debugging
        input->setName((struct IOPort*)input, "input");
        #endif
        input->container = (struct Actor*)DECGPiSquare_Accumulator;
        input->_isInsideConnected = false;
        input->_isOutsideConnected = true;
        input->_isInput = true;
        input->_isOutput = false;
        input->_isMultiport = true;
        input->_width = 1;
        input->_insideWidth = 0;
        input->_numberOfSinks = 0;
        input->_numberOfSources = 1;
        input->_type = TYPE_Double;
        pblListAdd(DECGPiSquare_Accumulator->_inputPorts, input);
        PblList* input_0 = pblListNewArrayList();
        struct DEReceiver* input_0_0 = DEReceiver_New();
        input_0_0->container = (struct IOPort*)input;
        input_0_0->_director = (struct DEDirector*)(*(DECGPiSquare_Accumulator->getDirector))(DECGPiSquare_Accumulator);
        pblListAdd(input_0, input_0_0);
        pblListAdd(input->_localReceivers , input_0);
        output = (struct TypedIOPort*)TypedIOPort_New();
        #ifdef _debugging
        output->setName((struct IOPort*)output, "output");
        #endif
        output->container = (struct Actor*)DECGPiSquare_Accumulator;
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
        pblListAdd(DECGPiSquare_Accumulator->_outputPorts, output);
        PblList* output__0 = pblListNewArrayList();
        pblListAdd(output->_farReceivers, output__0);
        return DECGPiSquare_Accumulator;
    }
    struct IOPort* DECGPiSquare_Accumulator_get_input() {
        return (struct IOPort*) input;
    }
    struct IOPort* DECGPiSquare_Accumulator_get_output() {
        return (struct IOPort*) output;
    }
    void DECGPiSquare_Accumulator_preinitialize(struct AtomicActor* actor) {
        /* ptolemy.cg.kernel.generic.program.procedural.c.CCodeGenerator
        Preinitalization of the actor : DECGPiSquare_Accumulator */
    }/* ptolemy.cg.kernel.generic.program.procedural.c.CCodeGenerator
    End of the preinitalization of the actor : DECGPiSquare_Accumulator */
    void DECGPiSquare_Accumulator_initialize(struct AtomicActor* actor) {
        /* ptolemy.cg.kernel.generic.program.procedural.c.CCodeGenerator
        Initalization of the actor : DECGPiSquare_Accumulator */
        DECGPiSquare_Accumulator__sum = convert_Int_Double(0);
    }/* ptolemy.cg.kernel.generic.program.procedural.c.CCodeGenerator
    End of the initalization of the actor : DECGPiSquare_Accumulator */
    bool DECGPiSquare_Accumulator_prefire(struct AtomicActor* actor) {
        /* ptolemy.cg.kernel.generic.program.procedural.c.CCodeGenerator
        prefire of the actor : DECGPiSquare_Accumulator */
        return true;
    }/* ptolemy.cg.kernel.generic.program.procedural.c.CCodeGenerator
    End of the prefire of the actor : DECGPiSquare_Accumulator */
    #ifdef __cplusplus
}
#endif
void DECGPiSquare_Accumulator_fire(struct AtomicActor* actor) {
    if ((*(input->hasToken))((struct IOPort*) input, 0))
    DECGPiSquare_Accumulator__sum += (*(input->get))((struct IOPort*) input, 0)->payload.Double;
    (*(output->send))((struct IOPort*) output, 0, Double_new(DECGPiSquare_Accumulator__sum));
}
#ifdef __cplusplus
extern "C" {
    #endif
    bool DECGPiSquare_Accumulator_postfire(struct AtomicActor* actor) {
        /* ptolemy.cg.kernel.generic.program.procedural.c.CCodeGenerator
        Postfire of the actor : DECGPiSquare_Accumulator */
        return true;
    }/* ptolemy.cg.kernel.generic.program.procedural.c.CCodeGenerator
    End of the postfire of the actor : DECGPiSquare_Accumulator */
    void DECGPiSquare_Accumulator_wrapup(struct AtomicActor* actor) {
        /* ptolemy.cg.kernel.generic.program.procedural.c.CCodeGenerator
        Wrapup of the actor : DECGPiSquare_Accumulator */
    }/* ptolemy.cg.kernel.generic.program.procedural.c.CCodeGenerator
    End of the wrapup of the actor : DECGPiSquare_Accumulator */
    #ifdef __cplusplus
}
#endif