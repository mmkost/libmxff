#include "libmx.h"

void mx_pop_back(t_list **head) {
    if(*head == NULL) {
        return;
    }
    t_list *cursor = *head;
    t_list *back = NULL;
    while(cursor -> next != NULL) {
        back = cursor;
        cursor = cursor -> next;
    }
    if(back != NULL) {
        back->next = NULL;
    }
    if(cursor == *head) {
        head = NULL;
    }
    free(cursor);
}
