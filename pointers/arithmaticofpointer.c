#include <stdio.h>
int main() {
    int var;
    var =20;
    int *ptr, *ptr2; // integer pointer
    ptr = &var; // pointer to var 
    printf("Value of pointer ptr in decimal is %d\n", ptr);
    printf("Value of pointer ptr in hex is %x\n", ptr);
    printf("Value STORED in pointer ptr in decimal is %d\n", *ptr);
    ptr2 = NULL; // null pointer 
return 0;
}