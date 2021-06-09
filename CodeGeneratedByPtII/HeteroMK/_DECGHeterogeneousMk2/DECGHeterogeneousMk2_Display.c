/* Generated by Ptolemy II (http://ptolemy.eecs.berkeley.edu)
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
    #include "DECGHeterogeneousMk2_Display.h"
    #ifdef __cplusplus
}
#endif
/* Variable declaration code */
/* end variable declaration code */
#ifdef __cplusplus
extern "C" {
    #endif
    static struct TypedIOPort* input;
    void DECGHeterogeneousMk2_Display_preinitialize(struct AtomicActor* actor);
    void DECGHeterogeneousMk2_Display_initialize(struct AtomicActor* actor);
    bool DECGHeterogeneousMk2_Display_prefire(struct AtomicActor* actor);
    void DECGHeterogeneousMk2_Display_fire(struct AtomicActor* actor);
    bool DECGHeterogeneousMk2_Display_postfire(struct AtomicActor* actor);
    void DECGHeterogeneousMk2_Display_wrapup(struct AtomicActor* actor);
    struct AtomicActor* DECGHeterogeneousMk2_Display_New() {
        struct AtomicActor* DECGHeterogeneousMk2_Display = AtomicActor_New();
        #ifdef _debugging
        ((struct AtomicActor*)DECGHeterogeneousMk2_Display)->setName((struct AtomicActor *)DECGHeterogeneousMk2_Display, "Display");
        #endif
        DECGHeterogeneousMk2_Display->container = DECGHeterogeneousMk2;
        DECGHeterogeneousMk2_Display->preinitialize = DECGHeterogeneousMk2_Display_preinitialize;
        DECGHeterogeneousMk2_Display->initialize = DECGHeterogeneousMk2_Display_initialize;
        DECGHeterogeneousMk2_Display->prefire = DECGHeterogeneousMk2_Display_prefire;
        DECGHeterogeneousMk2_Display->fire = DECGHeterogeneousMk2_Display_fire;
        DECGHeterogeneousMk2_Display->postfire = DECGHeterogeneousMk2_Display_postfire;
        DECGHeterogeneousMk2_Display->wrapup = DECGHeterogeneousMk2_Display_wrapup;
        input = (struct TypedIOPort*)TypedIOPort_New();
        #ifdef _debugging
        input->setName((struct IOPort*)input, "input");
        #endif
        input->container = (struct Actor*)DECGHeterogeneousMk2_Display;
        input->_isInsideConnected = false;
        input->_isOutsideConnected = true;
        input->_isInput = true;
        input->_isOutput = false;
        input->_isMultiport = true;
        input->_width = 1;
        input->_insideWidth = 0;
        input->_numberOfSinks = 0;
        input->_numberOfSources = 1;
        input->_type = TYPE_Int;
        pblListAdd(DECGHeterogeneousMk2_Display->_inputPorts, input);
        PblList* input_0 = pblListNewArrayList();
        struct DEReceiver* input_0_0 = DEReceiver_New();
        input_0_0->container = (struct IOPort*)input;
        input_0_0->_director = (struct DEDirector*)(*(DECGHeterogeneousMk2_Display->getDirector))(DECGHeterogeneousMk2_Display);
        pblListAdd(input_0, input_0_0);
        pblListAdd(input->_localReceivers , input_0);
        return DECGHeterogeneousMk2_Display;
    }
    struct IOPort* DECGHeterogeneousMk2_Display_get_input() {
        return (struct IOPort*) input;
    }
    void DECGHeterogeneousMk2_Display_preinitialize(struct AtomicActor* actor) {
        /* Preinitalization of the actor : DECGHeterogeneousMk2_Display */
    }/* End of the preinitalization of the actor : DECGHeterogeneousMk2_Display */
    void DECGHeterogeneousMk2_Display_initialize(struct AtomicActor* actor) {
        /* Initalization of the actor : DECGHeterogeneousMk2_Display */
    }/* End of the initalization of the actor : DECGHeterogeneousMk2_Display */
    bool DECGHeterogeneousMk2_Display_prefire(struct AtomicActor* actor) {
        /* prefire of the actor : DECGHeterogeneousMk2_Display */
        return true;
    }/* End of the prefire of the actor : DECGHeterogeneousMk2_Display */
    #ifdef __cplusplus
}
#endif
void DECGHeterogeneousMk2_Display_fire(struct AtomicActor* actor) {
    if ((*(input->hasToken))((struct IOPort*) input, 0)) {
        printf("%d\n", (*(input->get))((struct IOPort*) input, 0)->payload.Int);
    }
}
#ifdef __cplusplus
extern "C" {
    #endif
    bool DECGHeterogeneousMk2_Display_postfire(struct AtomicActor* actor) {
        /* Postfire of the actor : DECGHeterogeneousMk2_Display */
        return true;
    }/* End of the postfire of the actor : DECGHeterogeneousMk2_Display */
    void DECGHeterogeneousMk2_Display_wrapup(struct AtomicActor* actor) {
        /* Wrapup of the actor : DECGHeterogeneousMk2_Display */
    }/* End of the wrapup of the actor : DECGHeterogeneousMk2_Display */
    #ifdef __cplusplus
}
#endif