#include "libmx.h"
void mx_str_reverse(char *s) {
    for( int i = 0; s[i] != '\0'; i++) {
        for( int j = i; s[j] != '\0'; j++) {
            mx_swap_char(&s[i], &s[j]);
        }
    }
}
