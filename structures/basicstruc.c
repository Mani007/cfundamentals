#include <stdio.h>
// declaring a structure 
struct employee_data
{
    int id;
    char* name;
    int age;
} emp1, emp2;

int main() {
    //struct employee_data employee;
    emp1.id = 101;
    emp1.age = 25;
    //emp2 = {emp2.id=102,emp2.age=45,emp2.name="xyz"};
   struct employee_data emp2 = {emp2.id=102,emp2.name="xyz",emp2.age=45};
    // employee.name[0] = 'J';
    // employee.name[1] = 'h';
    // employee.name[2] = 'o';
    // employee.name[3] = 'n';
    // employee.name[4] = '\0';
    emp1.name = "abc";
    printf("Employee ID is %d\n", emp1.id);
    printf("Employee age is %d\n", emp1.age);
    printf("Employee name is %s\n", emp1.name);
    printf("Employee ID is %d\n", emp2.id);
    printf("Employee age is %d\n", emp2.age);
    printf("Employee name is %s\n", emp2.name);
    
    
return 0;
}