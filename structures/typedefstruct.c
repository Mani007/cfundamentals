#include <stdio.h>
struct Foo{
  int i;
};

// another way of using typedef with structures 
typedef struct student { 
    int x; 
} newstudent;

// defining new name for str1 
typedef struct Foo fun; 
int main() {
    struct student X;
    
    newstudent A;
    fun B;
    A.x = 1;
    B.i = 2;
    X.x = 5;
    printf("using typedef value from structure A is %d\n", A.x);
    printf("without typedef value from structure X is %d\n", X.x);
    printf("Using typedef the value of B is %d\n", B.i);
    
return 0;
}