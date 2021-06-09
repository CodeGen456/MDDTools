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
#include "DECGHeterogeneousMk2.h"
/* About to define ports. */
/* CCodeGenerator:_generateAndWriteCompositeActorCode() */
struct CompositeActor* DECGHeterogeneousMk2;
struct CompositeActor* DECGHeterogeneousMk2_New() {
    DECGHeterogeneousMk2 = CompositeActor_New();
    #ifdef _debugging
    ((struct CompositeActor*)DECGHeterogeneousMk2)->setName((struct CompositeActor *)DECGHeterogeneousMk2, "DECGHeterogeneousMk2");
    #endif
    /* Creation of the director */
    struct DEDirector* DECGHeterogeneousMk2_DE_Director = DEDirector_New();
    #ifdef _debugging
    ((struct Director*)DECGHeterogeneousMk2_DE_Director)->setName((struct Director *)DECGHeterogeneousMk2_DE_Director, "DE Director");
    #endif
    DECGHeterogeneousMk2->_director = (struct Director*)DECGHeterogeneousMk2_DE_Director;
    /* Actor Initializations */
    DECGHeterogeneousMk2_ModalModel = DECGHeterogeneousMk2_ModalModel_New();
    pblListAdd(DECGHeterogeneousMk2->_containedEntities, DECGHeterogeneousMk2_ModalModel);
    DECGHeterogeneousMk2_Ramp = DECGHeterogeneousMk2_Ramp_New();
    pblListAdd(DECGHeterogeneousMk2->_containedEntities, DECGHeterogeneousMk2_Ramp);
    DECGHeterogeneousMk2_DiscreteClock = DECGHeterogeneousMk2_DiscreteClock_New();
    pblListAdd(DECGHeterogeneousMk2->_containedEntities, DECGHeterogeneousMk2_DiscreteClock);
    DECGHeterogeneousMk2_Display = DECGHeterogeneousMk2_Display_New();
    pblListAdd(DECGHeterogeneousMk2->_containedEntities, DECGHeterogeneousMk2_Display);
    /* Creation of the ports of the container. */
    DECGHeterogeneousMk2_DE_Director->container = DECGHeterogeneousMk2;
    DECGHeterogeneousMk2_DE_Director->_startTime = 0.0;
    DECGHeterogeneousMk2_DE_Director->_stopTime = 10.0;
    DECGHeterogeneousMk2_DE_Director->binCountFactor = 2;
    DECGHeterogeneousMk2_DE_Director->isCQAdaptive = true;
    DECGHeterogeneousMk2_DE_Director->minBinCount = 2;
    DECGHeterogeneousMk2_DE_Director->stopWhenQueueIsEmpty = true;
    DECGHeterogeneousMk2_DE_Director->localClock->container = (struct Director*)DECGHeterogeneousMk2_DE_Director;
    int* depth = malloc(sizeof(int));
    *depth = 2147483647;
    pblMapAdd(DECGHeterogeneousMk2_DE_Director->actorsDepths, &DECGHeterogeneousMk2, sizeof(struct Actor*), depth, sizeof(int));
    struct IOPort* DECGHeterogeneousMk2_ModalModel_in = (struct IOPort*)DECGHeterogeneousMk2_ModalModel_get_in();
    struct IOPort* DECGHeterogeneousMk2_ModalModel_out = (struct IOPort*)DECGHeterogeneousMk2_ModalModel_get_out();
    struct IOPort* DECGHeterogeneousMk2_Ramp_trigger = (struct IOPort*)DECGHeterogeneousMk2_Ramp_get_trigger();
    struct IOPort* DECGHeterogeneousMk2_Ramp_output = (struct IOPort*)DECGHeterogeneousMk2_Ramp_get_output();
    struct IOPort* DECGHeterogeneousMk2_DiscreteClock_output = (struct IOPort*)DECGHeterogeneousMk2_DiscreteClock_get_output();
    struct IOPort* DECGHeterogeneousMk2_Display_input = (struct IOPort*)DECGHeterogeneousMk2_Display_get_input();
    *depth = 2;
    pblMapAdd(DECGHeterogeneousMk2_DE_Director->actorsDepths, &DECGHeterogeneousMk2_ModalModel, sizeof(struct Actor*), depth, sizeof(int));
    *depth = 2;
    pblMapAdd(DECGHeterogeneousMk2_DE_Director->portsDepths, &DECGHeterogeneousMk2_ModalModel_in, sizeof(struct IOPort*), depth, sizeof(int));
    *depth = 2;
    pblMapAdd(DECGHeterogeneousMk2_DE_Director->portsDepths, &DECGHeterogeneousMk2_ModalModel_out, sizeof(struct IOPort*), depth, sizeof(int));
    pblListAdd(pblListGet(DECGHeterogeneousMk2_ModalModel_out->_farReceivers, 0), pblListGet(pblListGet(DECGHeterogeneousMk2_Display_input->_localReceivers, 0), 0));
    *depth = 1;
    pblMapAdd(DECGHeterogeneousMk2_DE_Director->actorsDepths, &DECGHeterogeneousMk2_Ramp, sizeof(struct Actor*), depth, sizeof(int));
    *depth = 1;
    pblMapAdd(DECGHeterogeneousMk2_DE_Director->portsDepths, &DECGHeterogeneousMk2_Ramp_trigger, sizeof(struct IOPort*), depth, sizeof(int));
    *depth = 1;
    pblMapAdd(DECGHeterogeneousMk2_DE_Director->portsDepths, &DECGHeterogeneousMk2_Ramp_output, sizeof(struct IOPort*), depth, sizeof(int));
    pblListAdd(pblListGet(DECGHeterogeneousMk2_Ramp_output->_farReceivers, 0), pblListGet(pblListGet(DECGHeterogeneousMk2_ModalModel_in->_localReceivers, 0), 0));
    *depth = 0;
    pblMapAdd(DECGHeterogeneousMk2_DE_Director->actorsDepths, &DECGHeterogeneousMk2_DiscreteClock, sizeof(struct Actor*), depth, sizeof(int));
    *depth = 0;
    pblMapAdd(DECGHeterogeneousMk2_DE_Director->portsDepths, &DECGHeterogeneousMk2_DiscreteClock_output, sizeof(struct IOPort*), depth, sizeof(int));
    pblListAdd(pblListGet(DECGHeterogeneousMk2_DiscreteClock_output->_farReceivers, 0), pblListGet(pblListGet(DECGHeterogeneousMk2_Ramp_trigger->_localReceivers, 0), 0));
    *depth = 3;
    pblMapAdd(DECGHeterogeneousMk2_DE_Director->actorsDepths, &DECGHeterogeneousMk2_Display, sizeof(struct Actor*), depth, sizeof(int));
    *depth = 3;
    pblMapAdd(DECGHeterogeneousMk2_DE_Director->portsDepths, &DECGHeterogeneousMk2_Display_input, sizeof(struct IOPort*), depth, sizeof(int));
    free(depth);
    return DECGHeterogeneousMk2;
}
struct AtomicActor* DECGHeterogeneousMk2_Ramp;
struct AtomicActor* DECGHeterogeneousMk2_DiscreteClock;
struct AtomicActor* DECGHeterogeneousMk2_Display;
