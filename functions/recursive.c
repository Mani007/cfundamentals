#include <stdio.h>
// Implementing factorial problems and  sum of first n natural numbers
int nSum(int n){
     // base condition to terminate the recursion when N = 0
    if (n == 0) {
        return 0;
    }
     // recursive case / recursive call
    int res = n + nSum(n - 1);

    return res;

}

int nFactorial(int n){
     // base condition to terminate the recursion when N = 0
    if (n==0 || n==1) 
    {
        return 1;
    }
// recursive case / recursive call
    int res = n * nFactorial(n - 1);  // make sure to use parentheses for clear operator precedence 
    return res;
    
    
    }

int fibonacci(int n)
{
    // Base case
    // Fibonacci of 0 and 1 is the number itself
    if (n <= 1) {
        return n;
    }
    else {
        // Tree recursive calls
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}
int main() {
     int n = 7;

    // calling the recursive function
    int sum = nSum(n);

    // calling recursive function
    int fsum = nFactorial(n);

    // calling recursive function
    int ffab = fibonacci(n);

    printf("Sum of First %d Natural Numbers: %d \n", n, sum);
    printf("Factorial of First %d Natural Numbers: %d \n", n, fsum);
    printf("Fibonacci of First %d Natural Numbers: %d \n", n, ffab);
    // You cannot use the recursive function and bigger numbers
return 0;
}