#include <stdio.h>
int main() {
    int var;
    var =20;
    int *ptr, *ptr2; // integer pointer
    ptr = &var; // pointer to var 
    ptr2 = NULL; // null pointer
    printf("integer value of  var is %d\n", var);
    printf("integer value of  var is using pointer dereferencing operator at address %x is %d\n", &var, *ptr); // dereferencing the pointer prt
    printf("address of  var is %x\n", &var);
    printf("address of  pointer ptr is %x\n", &ptr);
    printf("address of  pointer ptr2 - THE NULL pointer is %x\n", ptr2);
  // %x is is format specifier for hexadecimal values

return 0;
}