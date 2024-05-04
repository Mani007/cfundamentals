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






