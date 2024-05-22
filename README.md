# All my C/C++ tutorials
### Basic C Program execution   
**Note:** for c++ setup in VScode please watch this video [link](https://www.youtube.com/watch?v=ABVeAXcRIJg&ab_channel=Codeflash)   

A C program consists of 
- Preprocessor command and directive (#include)
- Functions, variable, statements of expression and comments    

Compilation of basic C program [more info here](https://www.scaler.com/topics/execution-of-c-program/)
 - Preprocessing (*.i files) 
 - Compilation (*.s files - assembly files)
 - Assembly (*.o files)
 - Linking - static and dynamic linking(*.dll files)  (Linking of all the *.o files to *.exe)   

 **Make sure to use Debuger in C/C++ programs to code better**  [More info here](https://www.youtube.com/watch?v=NJYcRcqPyOw&ab_channel=ProgrammingKnowledge)  
 **Advance debugging skills** [More info here](https://www.youtube.com/watch?v=zSljcz54pYQ&ab_channel=CaseDigital)  

 Command to see the compilation process for C program in GCC.
 ```console 
 gcc -wall -save-temps main.c -o output

 ```    
 Some code snipped for basic C program is    
 ```
 "main": {
		"prefix": "maincode",
		"body": [
			"#include <stdio.h>",
			"int main() {",
			"\t$1",
			"return 0;",
			"}",
			
		],
		"description": "For settingup basic main program of C"
	}   
  ```

Some other concept of C program are keywords and reserved words. Identifiers are names of functions or variables. Be careful how to declare variable in C as it does not allow special characters such as @, $ etc as identifiers. C programs are case sensitive. Readablity and maintainablity of programs are good things. We can use tools like makefile for large C programs compilations. C program is composed of keywords, identifiers, constants, string literals and symbols.   

### Variable declarations
Different types of variables in C Programming are primary, derived -array,pointer, structure, union etc. and user defined. [more info here](https://www.geeksforgeeks.org/data-types-in-c/)

int,char,float, double, long,    
Syntax  

> type variable_name1,name2 = value;   

### Operators in C Programming
Arthmatic +,-./.*.%   
bitwise - &,|,^ -xor,<< - shift left,>> - shift right, ~ -one's complement   
logical &&,||,!,    
assigment  =, += (AddAND operator add right operand to left operand and store in the left operand), -=,*=,/=   
relational operators  ==,!=,>=,<=,>,<   
sizeof() operator,  
& - addressOF operator
'*' - pointer declaration and dereferencing operator
?: - conditional expression 
-> - AccessThroughPointer operator

**Very important concept in C is called operator Precedence** [More info Link](https://en.cppreference.com/w/c/language/operator_precedence)   

### Format specifier
Tells the complier about what type of datatype is in a variable.   
Exaples: %d for integer, %f for floating point, %c for character, %l for long, %lf for double, %Lf for long double  etc.    
Another type of format specifiers are **escape sequences** such as \n for newline, \t for tab, \r for carriage return etc.    
And finally we have comments in C **//** for single line comments and /**/ for multiline comments. 

### Constants in C   
Value that cannot be changed is constants. 
>// is the keyword   
> const    

Or we can use #define
> #define   
### Control and consitional statements in C
1. If statement
2. if else statement
3. if   else if   else ladder
4. Switch cases (including default case ) : This avoid too much of if statements.
5. Nested if statements      
6. Nested switch is also possible
```
int expression = 10;
switch (expression) // must be an integer expression or character expression
 {
  case x:
    // code block
    break;   
// it is not a must to have break statements BUT its recomended to use break statements. 
  case y:
    // code block
    break;
  default:
    // code block
}   
```    
### Loops in C 
Used for repeations. There are three major loops
1. for loop
2. While loop (integer and boolean)
3. Do while loop    (integer and boolean) - At least one execution is gaurenteed 
Make sure that you will not enter the infinite loop.  
> **continue;** // statement is used to just break out of the loop to next iteration by skipping some statements of the codes inside the loops.    
> **break;** // statement can be used to break out of the loops and switch cases   

### Goto statement   
This statement is mainly used if we want to break multiple loops with single statements    
> goto; // used for jumpuing statements   AVOID using it as it causes confusion in c code execution    

### Functions in C   
Modularity and reusability is obtained through functions. Easy debugging, divide work among people and easy maintainability. Different types of functions are library function and user defined functions.     
Functions need DECLARATION, DEFINITION and CALL 
```C Syntax
return_type function_name (para1_type para1_name, para2_type para2_name)
{
    // body of the function
}
```
### Recursion in C functions  
Recursive function: When a function call a copy of itself to solve a problem. Please not it require a **termination** condition. Also recursion can be replaced with iteration and often problems are broken into base cases and recursive cases. e.g. tower of hanoi, fibonacci series and factorial problems . [More info here](https://www.geeksforgeeks.org/c-recursion/)    
```C
type function_name (args) {
    // function statements
    // base condition
    // recursion case (recursive call)
}
```    
### Arrays as function parameters
We can provide arrays as function parameters using the following   
1. by declaring array as function parameters
2. by passing address of array as parameter through pointer.   
Arrays in C are always passed to the function as pointers pointing to the first element of the array.  

### Array in C   
List of collection of data of same type. Its stored in continuous consecutive locations. It can also store derived data types in memory location. their is no limit to dimension of array. 1D array is Vectors, 2D array is Matrices, 3 or more D array are tensors. Array has indexes to access its element. we can also use pointers to access elements of array. Any element of an array can be accessed very quickly using indexes or base address arthmatics. [More info here](https://www.geeksforgeeks.org/c-arrays/)  
```C
data_type array_name [size];
         or
data_type array_name [size1] [size2]...[sizeN];  // N-dimensional array
```     

### String in C   
The strings is nothing but character array with termination character such as \0, also known as null character. \0 is used to declare termination character. Without null character you cannot store the string. Hence length of string is length of string + 1. String is not a builtin data type in C, its just a character array terminated by null character.   
```C
char variable_name[r] = {list of string};
char name[] = {"STRING"};  // C compiler will automatically put null character at the end of the string AS WE HAVE USED  "" to define string
char namechar[]= {'S','T','R','I','N','G','\0'} // null character is used
```  
![Character array](https://media.geeksforgeeks.org/wp-content/uploads/20220808180435/memoryrepresentationofanarrayofstringsinC2.jpg)  

### Builtin string functions from <string.h> 
We have builtin string functions in C.   
1. strlen(stringname) returns length of string
2. strcpy(s1, s2) Copies the contents of string s2 to string s1.
3. strcmp(str1, str2)	Compares the first string with the second string. If strings are the same it returns 0.
4. strcat(s1, s2)	Concat s1 string with s2 string and the result is stored in the first string.
5. strlwr()	Converts string to lowercase.
5. strupr()	Converts string to uppercase.
6. strstr(s1, s2)	Find the first occurrence of s2 in s1.   

### Pointers in C  
Variable that stores address of another variable is called pointer. Pointer size depends on size of the variable its storing. Pointers are declared using * symbol. More information can be found [Link](https://www.geeksforgeeks.org/c-pointers/)
'*' is used to declare pointer variable.   
'*ptr' is known as dereferencing operator for pointer variable ptr.   
'&' is known as address of operator, used to store address to pointer variable.    
Pointer Syntax
```C
datatype * ptr;
```   
Usage of Pointer   
1. Declaration of pointer   
```C
int *ptr;
```
2. Initialization of pointer   
```C
int var = 10;
int * ptr;
ptr = &var;  // pointer initialization
``` 
3. dereferencing of pointer 
```C
 printf("Value at *ptr = %d \n", *ptr); // pointer dereferencing
```
![Pointer Dereferncing](https://media.geeksforgeeks.org/wp-content/uploads/20230223170531/2.png)   
  
Types of pointers   
1. int, float etc. pointers   
2. NULL pointer - pointer with NULL value is assigned, often used with if statement 
```C
data_type *pointer_name = NULL;
```
3. Array pointer and multi-dimensional array - [more info](https://www.geeksforgeeks.org/pointer-array-array-pointer/)
```C
char *ptr = &array_name;
```
4. struct pointer  
```C
struct struct_name *ptr;
```
5. function pointer  
```C
int (*ptr)(int, char);
```
6. double pointer  
```C
datatype ** pointer_name;
*pointer_name; // get the address stored in the inner level pointer
**pointer_name; // get the value pointed by inner level pointer
```
7. void pointer - generic pointer
```C
void * pointer_name;
```
8. wild pointer - pointer with no initial value or garbage value
```C
int *ptr;
char *str;
```
and many more types of pointer   

**Pointer Arithmetics**  
There are 4 types of arithmetic operation performed on pointers.   
- ++ and -- , + and -   
- Increment in a Pointer
- Decrement in a Pointer
- Addition of integer to a pointer
- Subtraction of integer to a pointer
- Subtracting two pointers of the same type
- Comparison of pointers of the same type.
- Assignment of pointers of the same type.   

```C
int a = 2;
int* ptr; 
ptr = &a; 
// Pointer arithmetic 
ptr = ptr + 1; // pointer ptr + the size of the pointer ptr which here is 8 bytes
``` 


**Uses of Pointers in C**

- Pass Arguments by Reference
- Accessing Array Elements
- Return Multiple Values from Function
- Dynamic Memory Allocation
- Implementing Data Structures
- In System-Level Programming where memory addresses are useful.
- In locating the exact value at some memory location.
- To avoid compiler confusion for the same variable name.
- To use in Control Tables.  

**Advantages of Pointers**

- Pointers are used for dynamic memory allocation and de-allocation.
- An Array or a structure can be accessed efficiently with pointers
- Pointers are useful for accessing memory locations.
- Pointers are used to form complex data structures such as linked lists, graphs, trees, etc.
- Pointers reduce the length of the program and its execution time as well.  

**Disadvantages of Pointers**

- Memory corruption can occur if an incorrect value is provided to pointers.
- Pointers are a little bit complex to understand.
- Pointers are majorly responsible for memory leaks in C.
- Pointers are comparatively slower than variables in C.
- Uninitialized pointers might cause a segmentation fault.   

### Array and pointers 
Pointers and Two-Dimensional Arrays  
In a two-dimensional array, we can access each element by using two subscripts, where the first subscript represents the row number and the second subscript represents the column number. The elements of 2-D array can be accessed with the help of pointer notation also.   
Suppose arr is a 2-D array, we can access any element arr[i][j] of the array using    
the pointer expression * (*(arr + i) + j). Now we’ll see how this expression can be derived.    

![NdArray](https://media.geeksforgeeks.org/wp-content/uploads/diagram.png)   

### Call by value and call by reference
Actual and formal parameters in function call expressions. In one way it is called by the direct value call/formal value call expression and in the second way it is called by by the addresses/actual value call in the function call expression. hence the return value of the function will also be changed by the call expression. By call by value the original values of the variables will not be changed where as the original values of the variables will be changed when call by reference. [more information here](https://www.geeksforgeeks.org/difference-between-call-by-value-and-call-by-reference/)  

### Structures in C 
It is user defined datatype. It also combines multiple datatypes. Often DOT operator is used to navigate structures.   
```C
struct structure_name {
    data_type member_name1;
    data_type member_name1;
    ....
    ....
};  
// varible structure declaretion 
struct structure_name {
    data_type member_name1;
    data_type member_name1;
    ....
    ....
}variable1, varaible2, ...;  

// structure declared beforehand
struct structure_name variable1, variable2, .......;  

// accessing data member in structure
structure_name.member1;
strcuture_name.member2;   

// initialization of structure with values
struct structure_name str;
str.member1 = value1;
str.member2 = value2;
str.member3 = value3;
.
.
.

// Or we can do the same as 
struct structure_name str = { value1, value2, value3 }; 

// or 
struct structure_name str = { .member1 = value1, .member2 = value2, .member3 = value3 };

```
![structures in C](https://media.geeksforgeeks.org/wp-content/cdn-uploads/Structure-In-C.png)   

### Typedef in structure in C
We can use typedef in declaration of structure in C, so that we do not have to to write long structure declarations further in the programme. We can almost use struct as a variable after declaring the structure. *typedef* is used to give alternate name to existing data structures. Also known as alias name
```C
typedef previous_name alias_name;

//examples:
typedef unsigned long ul; // now ul can be used instead of unsigned long
ul l1,l2,l3; // now l1 and l2 and l3 are unsigned long 

 int* p,q; // note it means p is a pointer and q is an integer 
// to make both pointer, we use typedef
typedef int* intptr;
intptr ptr1,ptr2; // both ptr1 and ptr2 are integer pointer

struct Foo{
  int i;
};

// another way of using typedef with structures 
typedef struct student { 
    int x; 
} newstudent;

// defining new name for str1 
typedef struct Foo fun; 

// we can use typedef in main programme as
int main(){
  newstudent A;
  fun B;
  A.x = 1;
  B.i = 2;
  ......
  return 0;
}

// Nested structure 
struct parent {
    int member1;
    struct member_str member2 {
        int member_str1;
        char member_str2;
        ...
    }
    ...
} 
// Another way to nested structure
struct parent {
    struct mem a;
};

struct mem {
    int var;
};

// Accessing nested members
str_parent.str_child.member;
```
### Structure pointers in C
Accessing elements in the structure through the pointers is unique. We use dereferencing '*' operator or the arrow '->' operator. The confusion starts as operator and their precedence will play a crucial role in the access of pointer variable. Operator precedence details can be found [here](https://www.geeksforgeeks.org/operator-precedence-and-associativity-in-c/)   









