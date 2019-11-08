#include "libmx.h"

t_list *mx_create_node(void *data) {
    struct s_list;
    t_list *list = malloc(sizeof(t_list));
    if(list == NULL) {
        return NULL;
    }
    list->data = data;
    list->next = NULL;
    return list;
}
