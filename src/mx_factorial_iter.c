#include "libmx.h"
int mx_factorial_iter(int n) {
    if(n < 0) {
        return 0;
    }
    if(n >= 13) {
        return 0;
    }

    int res = 1;
    int i = 1;
    while(i <= n) {
        res *= i;
        i++;
    } 
    return res;
}

