#include "libmx.h"

void mx_swap_list(void **first, void **second) {
    void *temp = *first;
    *first = *second;
    *second = temp;
}
