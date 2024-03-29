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
    #include "DECGHelloWorld_SingleEvent.h"
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
    static struct TypedIOPort* output;
    void DECGHelloWorld_SingleEvent_preinitialize(struct AtomicActor* actor);
    void DECGHelloWorld_SingleEvent_initialize(struct AtomicActor* actor);
    bool DECGHelloWorld_SingleEvent_prefire(struct AtomicActor* actor);
    void DECGHelloWorld_SingleEvent_fire(struct AtomicActor* actor);
    bool DECGHelloWorld_SingleEvent_postfire(struct AtomicActor* actor);
    void DECGHelloWorld_SingleEvent_wrapup(struct AtomicActor* actor);
    struct AtomicActor* DECGHelloWorld_SingleEvent_New() {
        struct AtomicActor* DECGHelloWorld_SingleEvent = AtomicActor_New();
        #ifdef _debugging
        ((struct AtomicActor*)DECGHelloWorld_SingleEvent)->setName((struct AtomicActor *)DECGHelloWorld_SingleEvent, "SingleEvent");
        #endif
        DECGHelloWorld_SingleEvent->container = DECGHelloWorld;
        DECGHelloWorld_SingleEvent->preinitialize = DECGHelloWorld_SingleEvent_preinitialize;
        DECGHelloWorld_SingleEvent->initialize = DECGHelloWorld_SingleEvent_initialize;
        DECGHelloWorld_SingleEvent->prefire = DECGHelloWorld_SingleEvent_prefire;
        DECGHelloWorld_SingleEvent->fire = DECGHelloWorld_SingleEvent_fire;
        DECGHelloWorld_SingleEvent->postfire = DECGHelloWorld_SingleEvent_postfire;
        DECGHelloWorld_SingleEvent->wrapup = DECGHelloWorld_SingleEvent_wrapup;
        output = (struct TypedIOPort*)TypedIOPort_New();
        #ifdef _debugging
        output->setName((struct IOPort*)output, "output");
        #endif
        output->container = (struct Actor*)DECGHelloWorld_SingleEvent;
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
        pblListAdd(DECGHelloWorld_SingleEvent->_outputPorts, output);
        PblList* output__0 = pblListNewArrayList();
        pblListAdd(output->_farReceivers, output__0);
        return DECGHelloWorld_SingleEvent;
    }
    struct IOPort* DECGHelloWorld_SingleEvent_get_output() {
        return (struct IOPort*) output;
    }
    void DECGHelloWorld_SingleEvent_preinitialize(struct AtomicActor* actor) {
        /* ptolemy.cg.kernel.generic.program.procedural.c.CCodeGenerator
        Preinitalization of the actor : DECGHelloWorld_SingleEvent */
    }/* ptolemy.cg.kernel.generic.program.procedural.c.CCodeGenerator
    End of the preinitalization of the actor : DECGHelloWorld_SingleEvent */
    void DECGHelloWorld_SingleEvent_initialize(struct AtomicActor* actor) {
        /* ptolemy.cg.kernel.generic.program.procedural.c.CCodeGenerator
        Initalization of the actor : DECGHelloWorld_SingleEvent */
        struct Director* director = (*(actor->getDirector))(actor);(*(director->fireAt))(director, (struct Actor*)actor, 0 + 0/(double)1000000000, 0);;
    }/* ptolemy.cg.kernel.generic.program.procedural.c.CCodeGenerator
    End of the initalization of the actor : DECGHelloWorld_SingleEvent */
    bool DECGHelloWorld_SingleEvent_prefire(struct AtomicActor* actor) {
        /* ptolemy.cg.kernel.generic.program.procedural.c.CCodeGenerator
        prefire of the actor : DECGHelloWorld_SingleEvent */
        return true;
    }/* ptolemy.cg.kernel.generic.program.procedural.c.CCodeGenerator
    End of the prefire of the actor : DECGHelloWorld_SingleEvent */
    #ifdef __cplusplus
}
#endif
void DECGHelloWorld_SingleEvent_fire(struct AtomicActor* actor) {
    (*(output->send))((struct IOPort*) output, 0, Double_new(1.0));
}
#ifdef __cplusplus
extern "C" {
    #endif
    bool DECGHelloWorld_SingleEvent_postfire(struct AtomicActor* actor) {
        /* ptolemy.cg.kernel.generic.program.procedural.c.CCodeGenerator
        Postfire of the actor : DECGHelloWorld_SingleEvent */
        return true;
    }/* ptolemy.cg.kernel.generic.program.procedural.c.CCodeGenerator
    End of the postfire of the actor : DECGHelloWorld_SingleEvent */
    void DECGHelloWorld_SingleEvent_wrapup(struct AtomicActor* actor) {
        /* ptolemy.cg.kernel.generic.program.procedural.c.CCodeGenerator
        Wrapup of the actor : DECGHelloWorld_SingleEvent */
    }/* ptolemy.cg.kernel.generic.program.procedural.c.CCodeGenerator
    End of the wrapup of the actor : DECGHelloWorld_SingleEvent */
    #ifdef __cplusplus
}
#endif
