#include <stdio.h>
int sum(int a,int b);  // Function declaration 
void printscr(int a); // Function declaration
int main() {
    int a,b;
    printf("Enter two numbers: \n ");
    scanf("%d %d",&a,&b);
    printscr(10); 
     printf("\n");  // Function call
    printf("%d\n",sum(a,b));   // Function call
    
return 0;
}

int sum(int a, int b){   // Function defintion
    return a+b;
} 

void printscr(int a){   // Function defintion
   
    for ( int i = 0; i < a; i++)
    {
        /* code */
        printf("%c ",'*');
    }
    
}