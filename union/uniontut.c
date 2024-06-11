#include <stdio.h>
struct employee
{
    int id;
    char name[20];
    float salary;
    char designation[20];
};

int main() {
    struct employee e1;
    e1.id = 101;
    e1.salary = 10000;
    printf("Employee id is %d\n",e1.id);
    printf("The current salary is %f\n",e1.salary);
    e1.id = 102;
    printf("Employee id now %d\n",e1.id);
    printf("The current salary is %f\n",e1.salary);
    e1.salary = 20000;
    printf(" Employee id now is %d\n",e1.id);
    printf("Salary after change %f\n",e1.salary);
    e1.id = 103;
    printf(" Employee id changed now is %d\n",e1.id);
    printf("Salary did not changed  %f\n",e1.salary);
    e1.salary = 30000;
    printf("Id did now changed %d\n",e1.id);
    printf("Salary changed is now %f\n",e1.salary);
    
return 0;
}