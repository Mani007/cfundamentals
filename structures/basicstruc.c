#include <stdio.h>
// declaring a structure 
struct employee_data
{
    int id;
    char* name;
    int age;
} employee;

int main() {
    //struct employee_data employee;
    employee.id = 101;
    employee.age = 25;
    // employee.name[0] = 'J';
    // employee.name[1] = 'h';
    // employee.name[2] = 'o';
    // employee.name[3] = 'n';
    // employee.name[4] = '\0';
    employee.name = "abc";
    printf("Employee ID is %d\n", employee.id);
    printf("Employee age is %d\n", employee.age);
    printf("Employee name is %s\n", employee.name);
    
    
return 0;
}