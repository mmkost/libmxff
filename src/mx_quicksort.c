#include "libmx.h"
void mx_swap_str(char **s1, char **s2) {
    char *temp = *s1;
    *s1 = *s2;
    *s2 = temp;
}
int mx_quicksort(char **arr, int left, int right) {
     int count = 0;
     int low = left;
     int high = right;
     int mid = (low + high) / 2;
     while(low <= high) {
         while(mx_strlen(arr[low]) < mx_strlen(arr[mid])) {
             low++;
         }
         while(mx_strlen(arr[high]) > mx_strlen(arr[mid])) {
             high--;
         }
         if( low <= high) {
             if(mx_strlen(arr[low]) >mx_strlen(arr[high])) {
                 count++;
                 mx_swap_str(&arr[low],&arr[high]);
             }
             else if(mx_strlen(arr[low]) == mx_strlen(arr[high])) {
                 if(mx_strcmp(arr[low],arr[high]) > 0) {
                     count++;
                     mx_swap_str(&arr[low],&arr[high]);
                 }                           
             }
             low++;
             high--;
         }
         count += mx_quicksort(arr, left,high);
         count += mx_quicksort(arr,low, right);
         }   
    return count;
     }
     int main () {
       char *arr[] = {"Michelangelo", "Donatello", "Leonardo", "Raphael"};
    printf("%d\n",mx_quicksort(arr, 0, 3));
    for(int i = 0; i < 4; i++) {
        printf("%s\n", arr[i]);
    }
}
