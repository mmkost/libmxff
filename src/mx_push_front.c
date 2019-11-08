#include "libmx.h"
void mx_push_front(t_list **list, void *data) {
    t_list *firstlist = mx_create_node(data);
    firstlist->next = *list;
    *list = firstlist;
}
