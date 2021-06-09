#include "DECGHeterogeneousMk2_ModalModel.h"

static struct IOPort* in;
static struct IOPort* out;
/* Beginning of create controller variables. */
int DECGHeterogeneousMk2_ModalModel__Controller_in;
bool DECGHeterogeneousMk2_ModalModel__Controller_in_isPresent;
int DECGHeterogeneousMk2_ModalModel__Controller_out;
int DECGHeterogeneousMk2_ModalModel___transitionFlag;

enum DECGHeterogeneousMk2_ModalModel__Controller__currentState {DECGHeterogeneousMk2_ModalModel__Controller_state, DECGHeterogeneousMk2_ModalModel__Controller_state2};
enum DECGHeterogeneousMk2_ModalModel__Controller__currentState DECGHeterogeneousMk2_ModalModel__Controller__currentState;
/* End of create controller variables */

void DECGHeterogeneousMk2_ModalModel_transferModalInputs(PblMap* mapTokensIn) {

DECGHeterogeneousMk2_ModalModel__Controller_in_isPresent = false;

in = (struct IOPort*)DECGHeterogeneousMk2_ModalModel_get_in();
if (pblMapContainsKey(mapTokensIn, &in, sizeof(struct IOPort*))) {

Token temp = *((Token*)pblMapGet(mapTokensIn, &in, sizeof(struct IOPort*), NULL));
DECGHeterogeneousMk2_ModalModel__Controller_in = temp.payload.Int;

DECGHeterogeneousMk2_ModalModel__Controller_in_isPresent = true;

}
out = (struct IOPort*)DECGHeterogeneousMk2_ModalModel_get_out();
}
void DECGHeterogeneousMk2_ModalModel_transferModalOutputs(PblMap* mapTokensOut) {

out = (struct IOPort*)DECGHeterogeneousMk2_ModalModel_get_out();
if (pblMapContainsKey(mapTokensOut, &out, sizeof(struct IOPort*))) {

Token temp = *((Token*)pblMapGet(mapTokensOut, &out, sizeof(struct IOPort*), NULL));
DECGHeterogeneousMk2_ModalModel__Controller_out = temp.payload.Int;

}
out = (struct IOPort*)DECGHeterogeneousMk2_ModalModel_get_out();
}
void DECGHeterogeneousMk2_ModalModel_makeTransitions(struct FSMDirector* director) {
/* The firing of the director. */

/* 1. Preemptive Transition */
/* Generate Transition Code. -adapter- */
/* ptolemy/cg/adapter/generic/program/procedural/adapters/ptolemy/domains/modal/kernel/FSMActor.java */

DECGHeterogeneousMk2_ModalModel___transitionFlag = 1;
switch (DECGHeterogeneousMk2_ModalModel__Controller__currentState)
{
case DECGHeterogeneousMk2_ModalModel__Controller_state:


DECGHeterogeneousMk2_ModalModel___transitionFlag = 0;

break;
case DECGHeterogeneousMk2_ModalModel__Controller_state2:


DECGHeterogeneousMk2_ModalModel___transitionFlag = 0;

break;

}

if (DECGHeterogeneousMk2_ModalModel___transitionFlag == 0) {
    switch (DECGHeterogeneousMk2_ModalModel__Controller__currentState) {
        case DECGHeterogeneousMk2_ModalModel__Controller_state:

DECGHeterogeneousMk2_ModalModel_state->iterate(DECGHeterogeneousMk2_ModalModel_state, 1);
            break;
        case DECGHeterogeneousMk2_ModalModel__Controller_state2:

DECGHeterogeneousMk2_ModalModel_state2->iterate(DECGHeterogeneousMk2_ModalModel_state2, 1);
            break;
    }

director->directorTransferModalOutputs(director);
/* 2. Nonpreemptive Transition */
/* Generate Transition Code. -adapter- */
/* ptolemy/cg/adapter/generic/program/procedural/adapters/ptolemy/domains/modal/kernel/FSMActor.java */

DECGHeterogeneousMk2_ModalModel___transitionFlag = 1;
switch (DECGHeterogeneousMk2_ModalModel__Controller__currentState)
{
case DECGHeterogeneousMk2_ModalModel__Controller_state:
if (((modulo_Int_Int(DECGHeterogeneousMk2_ModalModel__Controller_in, 3)) == 0)) 
{
DECGHeterogeneousMk2_ModalModel__Controller__currentState = DECGHeterogeneousMk2_ModalModel__Controller_state2;

}
else
{

DECGHeterogeneousMk2_ModalModel___transitionFlag = 0;

}

break;
case DECGHeterogeneousMk2_ModalModel__Controller_state2:
if (((modulo_Int_Int(DECGHeterogeneousMk2_ModalModel__Controller_in, 2)) == 0)) 
{
DECGHeterogeneousMk2_ModalModel__Controller__currentState = DECGHeterogeneousMk2_ModalModel__Controller_state2;
DECGHeterogeneousMk2_ModalModel__Controller__currentState = DECGHeterogeneousMk2_ModalModel__Controller_state;

}
else
{

DECGHeterogeneousMk2_ModalModel___transitionFlag = 0;

}

break;

}
}

director->transferOutputs(director);

}