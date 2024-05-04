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
    if (n==0 || n==1) 
    {
        return 1;
    }

    int res = n * nFactorial(n - 1);
    return res;
    
    
    }
int main() {
     int n = 5;

    // calling the function
    int sum = nSum(n);

    // calling the function
    int fsum = nFactorial(n);

    printf("Sum of First %d Natural Numbers: %d \n", n, sum);
    printf("Factorial of First %d Natural Numbers: %d \n", n, fsum);
return 0;
}