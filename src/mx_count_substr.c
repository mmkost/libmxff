#include "libmx.h"
int mx_count_substr(const char *str, const char *sub) {
    if (str == NULL || sub == NULL) {
      return -1;
    }
    int ln = mx_strlen(sub);
    int k = 0;
    while (*str) {
        for (int i = 0; i < ln && str[i] == sub[i]; i++) {
            if (sub[i + 1] == '\0') {
                k++;
            }
        }
        str++;
    }
    return k;
}
