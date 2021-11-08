// sizeof() Operator in C

/*
The sizeof() Operator in C:
	- sizeof() is an operator in C. (it is not a function though it looks like one, and "takes in a argument") sizeof shows how 
	    many bytes are occupied in memory by a given data type. 
    
	- sizeof() is evaluated at compile-time not at run-time unless variable-length is used in its argument.
	- We use sizeof() where ever possible to avoid having to calculate, and hard-code sizes of data types in the program.
    
	- NOTE: sizeof() output varies depending on the operating system the program is running on.

	- Display the byte size of the following data types (we will use %u [unsigned] as the format specifier):
		- int
		- char
		- long
		- long long
		- float
		- double 
		- long double 
*/


#include <stdio.h>


int main() {
    // print the size of each data type:
    printf("The int data type occupies: %u bytes \n", sizeof(int));
    printf("The char data type occupies: %u bytes \n", sizeof(char));
    printf("The short data type occupies: %u bytes \n", sizeof(short));
    printf("The long data type occupies: %u bytes \n", sizeof(long));
    printf("The long long data type occupies: %u bytes \n", sizeof(long long));
    printf("The float data type occupies: %u bytes \n", sizeof(float));
    printf("The double data type occupies: %u bytes \n", sizeof(double));
    printf("The long double data type occupies: %u bytes \n", sizeof(long double));

    return 0;
}
