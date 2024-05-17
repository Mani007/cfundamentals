#include <stdio.h>
int main() {
    int var;
    var =20;
    int *ptr, *ptr2; // integer pointer
    ptr = &var; // pointer to var 
    printf("Value of pointer ptr in decimal is %d\n", ptr);
    printf("Value of pointer ptr in decimal after adding +1 to it is %d\n", ptr+1); // instead of +1 it has added 4 bytes to it as int in C takes 4 bytes or size of pointer is 4 bytes. 
    printf("Value of pointer ptr in hex is %x\n", ptr);
    printf("Value of pointer ptr in hex after adding +1 is %x\n", ptr+1);
    printf("Value STORED in pointer ptr in decimal is %d\n", *ptr);
    printf("Value STORED in pointer ptr in decimal after adding +1 is %d\n", *ptr+ 1);
    ptr2 = NULL; // null pointer 
return 0;
}