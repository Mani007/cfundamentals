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
When you declare a pointer without any initial value, the pointer has garbage value unless you declare it NULL. also NULL is used to check the status of pointer. Null pointer value is reserved for referencing the not valid object. We cannot dereference null pointer. NULL pointer is preferred over uninitialized pointer. Null pointer is a value of pointer where as void pointer is a type of pointer. Technically Null pointer is ((void *)0) void pointer multiplied by zero. 
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
//void * pointer_name;
int x=10;
char y='A';
void *p;
p = &x; // void pointer is type casted to int pointer
p = &y; // void pointer is type casted to char pointer
```  
It has no data type associated with it. And hence it can easily be type casted to any other data type, its a general purpose pointer.   
In dynamic memory allocation the pointer is (void *) using malloc() and calloc(). We cannot dereference void pointer directly. And pointer arthmatic is not allowed in void pointer.   
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

Multi dimension array is stored in the same way as single dimension array, but access in multi dimension way with indexes. With pointer access of values is different than from indexes.   
```C
// C program to print the elements of 3-D
// array using pointer notation
#include<stdio.h>
int main()
{
  int arr[2][3][2] = {
                       {
                         {5, 10},
                         {6, 11},
                         {7, 12},
                       },
                       {
                         {20, 30},
                         {21, 31},
                         {22, 32},
                       }
                     };
  int i, j, k;
  for (i = 0; i < 2; i++)
  {
    for (j = 0; j < 3; j++)
    {
       for (k = 0; k < 2; k++)
         printf("%d\t", *(*(*(arr + i) + j) +k));
       printf("\n");
    }
  }
 
  return 0;
}

``` 
The output of the above program is 
```C
5    10    
6    11    
7    12    
20    30    
21    31    
22    32   
```
The memory layout of the multi dimension array is below.   

![NdArray1](https://media.geeksforgeeks.org/wp-content/uploads/Diagram12-1.png)   

More information in array pointers can be found [here](https://www.studysmarter.co.uk/explanations/computer-science/computer-programming/pointer-array-c/)

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

A structure pointer is defined as the pointer which points to the address of the memory block that stores a structure known as the structure pointer. Complex data structures like Linked lists, trees, graphs, etc. are created with the help of structure pointers.    

**Disclaimer:** Please revise array pointers especially 2D and 3D matrices using pointers to enhance understanding of pointer operations. More details are [here]()

**Note:** difference between structure and class in C++ can be found [here](https://www.geeksforgeeks.org/structure-vs-class-in-cpp/)   
```C
// Declaration of structure 
struct Student {
    int roll_no;
    
};
 
 int main()
{
 
    struct Student s1;
    struct Student* ptr = &s1; // Declaration od structure pointer
 
    s1.roll_no = 27;
    // Method 1 of accessing the structure pointer
    printf("Roll Number: %d\n", (*ptr).roll_no);   // Access structure using pointer ptr with dereferencing operator '*' and require brackets to manage precedence of operator. 

    // Method 2 of accessing the structure pointer
    printf("Roll No: %d\n", ptr->roll_no);  // Access structure using pointer ptr with '->' operator and hence does not require brackets. 
    
    return 0;
}

```

More information for structure pointer can be found [here](https://www.geeksforgeeks.org/structure-pointer-in-c/)   
Difference between c and c++ structure can be found [here](https://www.geeksforgeeks.org/difference-c-structures-c-structures/)

### Unions in C 
It is similar to structure but more memory efficient in implementation and execution compare to structure.   
```C
// Declaration for union
union union_name {
    datatype member1;
    datatype member2;
    ...
};

// instance of union
union union_name var1, var2, var3...;

// Access to union
var1.member1;
```


| Structure   | Union |
| :--------: | :-------: |
| The size of the structure is equal to or greater than the total size of all of its members.  | The size of the union is the size of its largest member.   |
| The structure can contain data in multiple members at the same time. | Only one member can contain data at the same time.     |
| It is declared using the struct keyword.    | It is declared using the union keyword.    |   

### Static Variables in C 
As we know that local variables will take precedence over global variables, if declared with the same name, same is applicable to formal arguments of the functions.   
Static variables will preserve their values even if they go out of scope. And memory will remain throughout the program. Also you always need to initialize the value of static variables. You cannot initialize static variables by calling a function.    
```C
static data_type var_name = var_value;
```   

Static variable example below
```C
#include <stdio.h>
 
// function with static variable
int fun()
{
    static int count = 0; // You always need to initialize the static variable otherwise it might be initialized from 0
    // static int count= fun(); // you cannot run a function to initialize the static variable
    count++;
    return count;
}
 
int main()
{
    printf(" %d\n", fun());
    printf(" %d\n", fun());
    printf(" %d\n", fun());
    printf(" %d\n", fun());
    return 0;
}
```   
Output is 
```C
1
2
3
4
```   
### Memory layout in C - Dynamic memory allocation in C  

| Static Memory Allocation   | Dynamic Memory Allocation |
| :--------: | :-------: |
| Allocation before program execution | Allocation in the program execution |
| No memory reuse and cannot be freed | Memory can be freed and reallocated  |
| Less efficient | More efficient  |   

Memory in any c program is allocated in four segments.  Learn Embedded or micro-controller programming to understand how memory management works in C programming. 
1. code and text 
2. Static/Global variables - data segment(if initialized) and bss segments(if data is not initialized) bss= block started by symbol
3. Stack (LIFO principle for function calls)
4. Heap - for dynamic memory allocation     

Use of heap for dynamic memory allocation is   
1. we create a pointer in our main function to point to a certain block of memory in the heap.   
2. Address of this pointer is stored in the local variable in the main function. You need to use good debugging skill to understand your program. 
3. This memory allocated in the heap, even if we over write the pointer, cannot get free automatically as C and C++ do not have concept of garbage collector. Hence you need to cleanup the memory allocated if unused, otherwise it will cause memory leak issues.   

command to check memory usage in C and C++ is assuming name of you program is myprogram.c 
```C 
gcc myprogram.c ; size .\a.exe 
```   
the result will look like using zize command of gcc
```C
text    data     bss     dec     hex filename
10624    4052     384   15060    3ad4 .\a.exe
```   
 There are 4 library functions provided by C defined under <stdlib.h> header file to facilitate dynamic memory allocation in C programming.   
1. malloc()  
The “malloc” or “memory allocation” method in C is used to dynamically allocate a single large block of memory with the specified size.   
```C
//ptr = (cast-type*) malloc(byte-size)
ptr = (int*) malloc(100 * sizeof(int));
//Since the size of int is 4 bytes, this statement will allocate 400 bytes of memory. And, the pointer ptr holds the address of the first byte in the allocated memory.
```  
![malloc in C](https://media.geeksforgeeks.org/wp-content/cdn-uploads/Malloc-function-in-c.png)     

2. calloc()  
“calloc” or “contiguous allocation” method in C is used to dynamically allocate the specified number of blocks of memory of the specified type. It initializes each block with a default value ‘0’. It has two parameters or arguments as compare to malloc().    
```C
//ptr = (cast-type*)calloc(n, element-size);
//here, n is the no. of elements and element-size is the size of each element.
ptr = (float*) calloc(25, sizeof(float));
//This statement allocates contiguous space in memory for 25 elements each with the size of the float.
 
```  
![calloc in C](https://media.geeksforgeeks.org/wp-content/cdn-uploads/calloc-function-in-c.png)  

3. free()     
“free” method in C is used to dynamically de-allocate the memory. The memory allocated using functions malloc() and calloc() is not de-allocated on their own. Hence the free() method is used, whenever the dynamic memory allocation takes place. It helps to reduce wastage of memory by freeing it.  
```C
free(ptr);  // assuming ptr is pointer referring to allocated memory location 
```
![free in C](https://media.geeksforgeeks.org/wp-content/cdn-uploads/Free-function-in-c.png)  

4. realloc()   
“realloc” or “re-allocation” method in C is used to dynamically change the memory allocation of a previously allocated memory. re-allocation of memory maintains the already present value and new blocks will be initialized with the default garbage value.   
```C
ptr = realloc(ptr, newSize);
//where ptr is reallocated with new size 'newSize'.
```

![free in C](https://media.geeksforgeeks.org/wp-content/cdn-uploads/realloc-function-in-c.png)    

### Storage classes in C
Storage classes can be divided in 4 major categories as shown below. 
![storage class in C](https://media.geeksforgeeks.org/wp-content/cdn-uploads/Storage-Classes-In-C.png)    
1. Auto   
This is the default storage class for all the variables declared inside a function or a block. Hence, the keyword auto is rarely used while writing programs in C language. Auto variables can be only accessed within the block/function they have been declared and not outside them (which defines their scope). Of course, these can be accessed within nested blocks within the parent block/function in which the auto variable was declared. However, they can be accessed outside their scope as well using the concept of pointers given here by pointing to the very exact memory location where the variables reside. They are assigned a garbage value by default whenever they are declared. 

2. extern   
Extern storage class simply tells us that the variable is defined elsewhere and not within the same block where it is used. Basically, the value is assigned to it in a different block and this can be overwritten/changed in a different block as well. So an extern variable is nothing but a global variable initialized with a legal value where it is declared in order to be used elsewhere. It can be accessed within any function/block. Also, a normal global variable can be made extern as well by placing the ‘extern’ keyword before its declaration/definition in any function/block. This basically signifies that we are not initializing a new variable but instead, we are using/accessing the global variable only. The main purpose of using extern variables is that they can be accessed between two different files which are part of a large program.

3. static   
This storage class is used to declare static variables which are popularly used while writing programs in C language. Static variables have the property of preserving their value even after they are out of their scope! Hence, static variables preserve the value of their last use in their scope. So we can say that they are initialized only once and exist till the termination of the program. Thus, no new memory is allocated because they are not re-declared. Their scope is local to the function to which they were defined. Global static variables can be accessed anywhere in the program. By default, they are assigned the value 0 by the compiler. 

4. register   
This storage class declares register variables that have the same functionality as that of the auto variables. The only difference is that the compiler tries to store these variables in the register of the microprocessor if a free register is available. This makes the use of register variables to be much faster than that of the variables stored in the memory during the runtime of the program. If a free registration is not available, these are then stored in the memory only. Usually, a few variables which are to be accessed very frequently in a program are declared with the register keyword which improves the running time of the program. An important and interesting point to be noted here is that we cannot obtain the address of a register variable using pointers.   









