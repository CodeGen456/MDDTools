#include "DECGHeterogeneousMk2_ModalModel_state.h"
void DECGHeterogeneousMk2_ModalModel_state_Schedule_iterate() {
#ifdef _debugging
    fprintf(stderr, "%s, line: %d:DECGHeterogeneousMk2_ModalModel_state_Schedule_iterate(): Start\n", __FILE__, __LINE__);
#endif

(*(DECGHeterogeneousMk2_ModalModel_state_Scale->iterate))(DECGHeterogeneousMk2_ModalModel_state_Scale, 1);
#ifdef _debugging
    fprintf(stderr, "%s, line: %d:DECGHeterogeneousMk2_ModalModel_state_Schedule_iterate(): Done!\n", __FILE__, __LINE__);
#endif
}
