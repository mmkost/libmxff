#include "libmx.h"
int mx_get_substr_index(const char *str, const char *sub) {
    if(str == NULL || sub == NULL) {
        return -2;
    }
    int i = 0;
    int res = 0;
    int count = 0;
    while(*str) {
    if(str[i] == sub[i]) {
        while(str[i] == sub[i])
            i++;
            count++;
        if(sub[i] == '\0')
            return res - count + 1;
        }
        str++;
        res++;
    }
    return -1;
}
