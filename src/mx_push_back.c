#include "libmx.h"
void mx_push_back(t_list **list, void *data) {
    t_list *new_list = *list;
    while(new_list->next != NULL) {
        new_list = new_list->next;
    }
    new_list->next = malloc(sizeof(t_list));
    new_list->next->data = data;
    new_list->next->next = NULL;
}




































