// Call by value and call by reference
#include <stdio.h>
// Swap functions that swaps
// two values
void swapformal(int x, int y) // Formal Parameters
{
    int t;
 
    t = x;
    x = y;
    y = t;
 
    printf("Inside Function by value:\nx = %d y = %d\n", x, y);
} 

// Function to swap two variables
// by references
void swapactual(int* x, int* y) // Formal Parameters
{
    int t;
 
    t = *x;
    *x = *y;
    *y = t;
 
    printf("Inside the Function by reference is:\nx = %d y = %d\n", *x, *y);
} 

int main() {
    
  int a = 10, b = 20;
    // Pass by Values
    swapformal(a, b); // Actual Parameters
 
    printf("In the Caller by value:\na = %d b = %d\n", a, b);
 
    // Pass reference
    swapactual(&a, &b); // Actual Parameters
 
    printf("Inside the Caller by the reference:\na = %d b = %d\n", a, b);

return 0;
}