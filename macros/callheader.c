#include <stdio.h>
#include "myfunc.c" // incude function from other files
// make sure in some cases you might need to include the full path
// Also its recommended to make header files using function definations. here we are not using the header files. 
int main() {
    int a = 10;
    int b = 20;
    int sum = mysum(a, b);
    printf("Sum of %d and %d is: %d\n", a, b, sum);
return 0;
}