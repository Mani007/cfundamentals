#include <stdio.h>

int sum(int a, int b){
    return a+b;
}
int main() {
    int a,b;
    printf("Enter two numbers: \n ");
    scanf("%d %d",&a,&b);
    printf("%d",sum(a,b));
    
return 0;
}