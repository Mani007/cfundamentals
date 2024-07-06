#include <stdio.h>
int main() {
    int a=10;
    int *ptr = &a;
    if (ptr != NULL) {
        
        printf("The value of *ptr=%d\n", *ptr); // ptr =10
    }  else {
        printf("ptr is NULL and cannot be dereferenced \n"); // ptr =0
    }
    //printf("The value of *ptr=NULL is  %d\n", ptr); // ptr =0
return 0;
}