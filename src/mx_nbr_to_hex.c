#include "libmx.h"
char *mx_nbr_to_hex(unsigned long nbr) {
    unsigned long copy = nbr;
    unsigned long copy3 = nbr;
    int count = 0;
    while(copy != 0) {
        count++;
        copy = copy / 16;
    }
    char *new_nbr = mx_strnew(count);
    count--;
    while(copy3 != 0) {
        int copy2 = copy3 % 16;
        if(copy2 < 10) {
            new_nbr[count] = copy2 + 48;
            count--;
        }
        else if(copy2 > 9 && copy2 < 17) {
            new_nbr[count] = copy2 + 87;
            count--;
        }
        else {
            return 0;
        }
        copy3 = copy3 / 16;
    }
    return new_nbr;
}           
