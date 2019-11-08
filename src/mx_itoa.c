#include "libmx.h"
char *mx_itoa(int number) {
    int count = 0;
    int copy = number;
    char *res;
    while(copy != 0) {
        copy = copy / 10;
        count++;
    }
    if(number < 0) {
        number = -number;
        res = (char*)malloc((count + 2) * sizeof(char));
        res[0] = '-';
        res[count + 1] = '\0';
        while (number != 0) {
        res[count] = number % 10 + 48;
        number /= 10;
        count--;
    }
    }
    else {
        res = (char*)malloc((count + 1) * sizeof(char));
        res[count] = '\0';
        while (number != 0) {
        res[count - 1] = number % 10 + 48;
        number /= 10;
        count--;
    }
    }
    return res;
}
