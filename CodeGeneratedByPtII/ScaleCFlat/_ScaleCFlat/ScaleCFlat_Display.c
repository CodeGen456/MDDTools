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
    #include "ScaleCFlat_Display.h"
    #ifdef __cplusplus
}
#endif
/* Variable declaration code */
/* end variable declaration code */
#ifdef __cplusplus
extern "C" {
    #endif
    static struct TypedIOPort* input;
    void ScaleCFlat_Display_preinitialize(struct AtomicActor* actor);
    void ScaleCFlat_Display_initialize(struct AtomicActor* actor);
    bool ScaleCFlat_Display_prefire(struct AtomicActor* actor);
    void ScaleCFlat_Display_fire(struct AtomicActor* actor);
    bool ScaleCFlat_Display_postfire(struct AtomicActor* actor);
    void ScaleCFlat_Display_wrapup(struct AtomicActor* actor);
    struct AtomicActor* ScaleCFlat_Display_New() {
        struct AtomicActor* ScaleCFlat_Display = AtomicActor_New();
        #ifdef _debugging
        ((struct AtomicActor*)ScaleCFlat_Display)->setName((struct AtomicActor *)ScaleCFlat_Display, "Display");
        #endif
        ScaleCFlat_Display->container = ScaleCFlat;
        ScaleCFlat_Display->preinitialize = ScaleCFlat_Display_preinitialize;
        ScaleCFlat_Display->initialize = ScaleCFlat_Display_initialize;
        ScaleCFlat_Display->prefire = ScaleCFlat_Display_prefire;
        ScaleCFlat_Display->fire = ScaleCFlat_Display_fire;
        ScaleCFlat_Display->postfire = ScaleCFlat_Display_postfire;
        ScaleCFlat_Display->wrapup = ScaleCFlat_Display_wrapup;
        input = (struct TypedIOPort*)TypedIOPort_New();
        #ifdef _debugging
        input->setName((struct IOPort*)input, "input");
        #endif
        input->container = (struct Actor*)ScaleCFlat_Display;
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
        pblListAdd(ScaleCFlat_Display->_inputPorts, input);
        PblList* input_0 = pblListNewArrayList();
        struct SDFReceiver* input_0_0 = SDFReceiver_New();
        input_0_0->container = (struct IOPort*)input;
        pblListAdd(input_0, input_0_0);
        pblListAdd(input->_localReceivers , input_0);
        return ScaleCFlat_Display;
    }
    struct IOPort* ScaleCFlat_Display_get_input() {
        return (struct IOPort*) input;
    }
    void ScaleCFlat_Display_preinitialize(struct AtomicActor* actor) {
        /* Preinitalization of the actor : ScaleCFlat_Display */
    }/* End of the preinitalization of the actor : ScaleCFlat_Display */
    void ScaleCFlat_Display_initialize(struct AtomicActor* actor) {
        /* Initalization of the actor : ScaleCFlat_Display */
    }/* End of the initalization of the actor : ScaleCFlat_Display */
    bool ScaleCFlat_Display_prefire(struct AtomicActor* actor) {
        /* prefire of the actor : ScaleCFlat_Display */
        return true;
    }/* End of the prefire of the actor : ScaleCFlat_Display */
    #ifdef __cplusplus
}
#endif
void ScaleCFlat_Display_fire(struct AtomicActor* actor) {
    if ((*(input->hasToken))((struct IOPort*) input, 0)) {
        //printf("%d\n", (*(input->get))((struct IOPort*) input, 0)->payload.Int);
    }
}
#ifdef __cplusplus
extern "C" {
    #endif
    bool ScaleCFlat_Display_postfire(struct AtomicActor* actor) {
        /* Postfire of the actor : ScaleCFlat_Display */
        return true;
    }/* End of the postfire of the actor : ScaleCFlat_Display */
    void ScaleCFlat_Display_wrapup(struct AtomicActor* actor) {
        /* Wrapup of the actor : ScaleCFlat_Display */
    }/* End of the wrapup of the actor : ScaleCFlat_Display */
    #ifdef __cplusplus
}
#endif
