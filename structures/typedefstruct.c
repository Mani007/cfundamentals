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
    newstudent A;
    fun B;
    A.x = 1;
    B.i = 2;
    printf("using typedef Value from structure A is %d\n", A.x);
    printf("Using typedef the value of B is %d\n", B.i);
    
return 0;
}