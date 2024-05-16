#include <stdio.h>
int main() {
    int var;
    var =20;
    int *ptr; // integer pointer
    ptr = &var; // pointer to var 
    printf("integer value of  var is %d\n", var);
    printf("integer value of  var is using pointer %x is %d\n", &var, var);
    printf("address of  var is %x\n", &var);
    printf("address of  pointer ptr is %x\n", &ptr);
  // %x is is format specifier for hexadecimal values

return 0;
}