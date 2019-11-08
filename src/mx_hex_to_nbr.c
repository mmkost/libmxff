#include "libmx.h"

unsigned long mx_poww(double n, int pow) {
    if( pow > 0) {
        return n * mx_poww(n, pow - 1);
    }
    else {
        return 1;
    }
}

int char_to_int(char hex) {
    if(hex >= 'A' && hex <= 'F') {
        return hex - 55;
    }
    else if( hex >= 'a' && hex <= 'f') {
        return hex - 87;
    }
    else 
        return hex - '0';
}

unsigned long mx_hex_to_nbr(const char *hex) {
    long res = 0;
    for(int i = 0; i < mx_strlen(hex); i++) {
        res += char_to_int(hex[i]) * mx_poww(16, mx_strlen(hex) - i - 1);
    }
    return res;
}

