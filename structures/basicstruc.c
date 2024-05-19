#include <stdio.h>
#include <string.h>
// declaring a structure 
struct employee_data
{
    int id;
    char* name;
    int age;
    char gender[20];
} emp1;  // global instance of struct employee_data

int main() {
    //struct employee_data employee;
    emp1.id = 101;
    emp1.age = 25;
    //emp2 = {emp2.id=102,emp2.age=45,emp2.name="xyz"};
   struct employee_data emp2 = {emp2.id=102,emp2.name="xyz",emp2.age=45}; //local instance of employee_data
    // employee.name[0] = 'J';
    // employee.name[1] = 'h';
    // employee.name[2] = 'o';
    // employee.name[3] = 'n';
    // employee.name[4] = '\0';
    emp1.name = "abc";
    strcpy(emp1.gender, "male");
    strcpy(emp2.gender, "female");
    //emp2.gender = "female"; // this will not work as charater is array
    printf("Employee ID is %d\n", emp1.id);
    printf("Employee age is %d\n", emp1.age);
    printf("Employee name is %s\n", emp1.name);
    printf("Employee ID is %d\n", emp2.id);
    printf("Employee age is %d\n", emp2.age);
    printf("Employee name is %s\n", emp2.name);
    printf("Employee2 name is %s\n", emp2.gender);
    printf("Employee1 name is %s\n", emp1.gender);
    
    
return 0;
}