#include "libmx.h"
void swap_list(void **first, void **second) {
    void *temp = *first;
    *first = *second;
    *second = temp;
}
