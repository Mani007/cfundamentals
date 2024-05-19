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
    int* p,q; // note it means p is a pointer and q is an integer 
    // to make both pointer, we use typedef
    typedef int* intptr;
    intptr ptr1,ptr2; // both ptr1 and ptr2 are integer pointer
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