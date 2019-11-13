#include "libmx.h"

void mx_swap_list(void **first, void **second) {
    void *temp = *first;
    *first = *second;
    *second = temp;
}

t_list *mx_sort_list(t_list *lst, bool (*cmp)(void *,void *)) {
    t_list *start = lst;
    t_list *step;
    t_list *min;
    while(start->next != NULL) {
        min = start;
        step = start->next;
        while(step) {
            if(cmp(min->data,step->data) == true) {
                min = step;
            }
            step = step->next;
        }
        mx_swap_list(&start->data, &min->data);
        start = start->next;
    }
    return lst;
}
