#include <stdio.h>
int main() {
    int var[5] = {1, 2, 3, 4, 5};
    int *ptr; // integer pointer
    ptr = var; // pointer to var array - special declaration for array
    
    printf("integer value of  var is %d\n", var[0]);
    printf("integer value of  var[0] is using pointer dereferencing operator at address %p is %d\n", ptr, *ptr); // dereferencing the pointer prt
    printf("integer value of  var[1] is using pointer dereferencing operator and pointer arithmetic with addition at address of var[1] %p is %d\n", ptr+1, *(ptr+1)); // dereferencing the pointer prt
    printf("address of  first value of array var is %p\n", ptr);
    printf("address of  pointer ptr is %p\n", &ptr); //this is the pointer address
    
return 0;
}