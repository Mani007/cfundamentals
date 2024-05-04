#include <stdio.h>
int sun(int a,int b);  // Function declaration 

int main() {
    int a,b;
    printf("Enter two numbers: \n ");
    scanf("%d %d",&a,&b);
    printf("%d",sum(a,b));   // Function call
    
return 0;
}

int sum(int a, int b){   // Function defintion
    return a+b;
}