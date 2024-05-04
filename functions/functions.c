#include <stdio.h>
int sum(int a,int b);  // Function declaration 
void printscr(int a); // Function declaration
int takenumber(); // Function declaration
int main() {
    int a,b;
    printf("Enter one numbers: \n ");
    scanf("%d",&a);
    b = takenumber();
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

int takenumber(){   // Function defintion
    int i;
   printf("Please enter a number \n "); 
    scanf("%d",&i);
    return i; 
}