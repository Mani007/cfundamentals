#include <stdio.h>
#include <string.h>
// note that union cannot handle all members at once hence you will see garbage values
// memory allocation size is the size of the biggest member variable in the union
// union can hold structures inside the union and vise versa is also true, but in case of union size of union is the size of the biggest member variable in the union
// for efficient memory management union is preferred
union employee
{
    int id;
    char name[20];
    float salary;
    char designation[20];
};

int main() {
    union employee e1;
    // note that union cannot handle all members at once hence you will see garbage values
    e1.id = 101;  // id will become garbage as we are changing salary in next line. 
    e1.salary = 10000;
    printf("Employee id is %d\n",e1.id);  // id will be garbage as we are changed salary in next line
    printf("The current salary is %f\n",e1.salary); // the current salary will be displayed as we have changed salary recently
    e1.id = 102;
    printf("Employee id now %d\n",e1.id);
    printf("The current salary is %f\n",e1.salary); // the current salary will not be displayed as we have changed id recently
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