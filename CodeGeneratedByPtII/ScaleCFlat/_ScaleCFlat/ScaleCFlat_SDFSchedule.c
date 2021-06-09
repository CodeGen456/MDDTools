#include "ScaleCFlat.h"
void ScaleCFlat_Schedule_iterate() {
#ifdef _debugging
    fprintf(stderr, "%s, line: %d:ScaleCFlat_Schedule_iterate(): Start\n", __FILE__, __LINE__);
#endif

(*(ScaleCFlat_Ramp->iterate))(ScaleCFlat_Ramp, 1);
(*(ScaleCFlat_Scale->iterate))(ScaleCFlat_Scale, 1);
(*(ScaleCFlat_Display->iterate))(ScaleCFlat_Display, 1);
#ifdef _debugging
    fprintf(stderr, "%s, line: %d:ScaleCFlat_Schedule_iterate(): Done!\n", __FILE__, __LINE__);
#endif
}
