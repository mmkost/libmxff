#include "libmx.h"

int mx_list_size(t_list *list) {
    t_list *count = list;
    int i = 0;
    while(count != NULL) {
        i++;
        count = count-> next;
    }
    return i;
}
