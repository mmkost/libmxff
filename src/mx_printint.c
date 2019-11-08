#include "libmx.h"
void mx_printint(int n) {
    int count = 1;
    if(n < 0) {
       mx_printchar('-');
    } 
    int res = n;
    while(res > 9 || res < -9) {
        res = res / 10;
        count = count * 10;
    }
    while(count != 0) {
	if (n > 0)
        	mx_printchar(n / count + 48);
        else
		mx_printchar( n/ count * -1 + 48);
	n = n % count;
        count = count / 10;
    }
}

