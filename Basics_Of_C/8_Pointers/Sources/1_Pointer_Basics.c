// Pointer Basics in C 

/*
    A pointer is a variable whose value is a memory address.
        - Its value is the address of another location in memory that can caontain a value.
        - Provides an indirect means of accessing the value of a particular data item.
        - Memory address are represented as hexadecimal values.
        - EVERY pointer will be associated with a specific data type. It can be used to point to a variable of that data type.
        - 

    Defining a pointer: 
        - Defining a pointer is not like defining a regular variable, the syntax is slightly different
        - There is no pointer keyword / data type like there is with int, float, double...

        - general syntax:
        data_type *p_pointerName;

        ex) int *p_myPointer;

        - The * signifies that this variable is a pointer and is of the data type int.
        - The above syntax does not initialize the pointer to anything, it can be dangerous when it is not initialized
        - You should ALWAYS initialize a pointer when you declare it!

        - If you do not know what to initialize the pointer to, initialize it as a NULL pointer (a pointer that points to nothing.)
        ex) int *pnumber = NULL;
        - NULL is equvalent to zero. It is guarenteed to not point to anything in memory. This prevents accidental overwriting in memory.
        - The NULL pointer is NOT the same as the Null Terminator ('\0')

        - If we need to explicitly need to use the NULL pointer definition we need to include the stddef.h header file
        #include <stddef.h>

    Address Of Operator
        - If we already have a varaible and we want to assign a pointer to it, we can use the address of operator ( & )
        - In order to assign an address to a pointer the address must already exist. The compiler must already have allocated the space and 
          address in order for the pointer to use it.
    
    Accessing the value a pointer is pointing to:
        - Printing the value of the pointer will print the address, we want to print the VALUE within the address.
        - We can do this by using the idirection operator (*). This is also refered to as the dereference operator.

        ex)

        int my_number = 10;
        int *p_number_pointer = &my_number;
        int result = 0;
        // we initialize the number, result, and the pointer, if we want to use the value the pointer is pointing to we need to dereference it.

        result = *p_number_pointer + 5;
        // the value stored in my_number is 10, so we add 5 to it.
*/


#include <stdio.h>
// #include <stdlib.h>
// #include <stddef.h>


int main() {

    // Small example of pointers:
    // Initalize variables and pointers
    int x;
    int count = 10;
    int *int_pointer = NULL;

    // Set the pointer to the address of count.
    int_pointer = &count;

    // Dereference the pointer to set the VALUE of the address of the pointer to the empty varaible x
    x = *int_pointer;

    // print count and x
    printf("count = %i, x = %i \n", count, x); 
    // print the value / address of the pointer. To do this we need to use the %p format specifier for printing
    printf("pointer value: %p \n", int_pointer);
    // We can use the address of operator in the print statements to see that value
    printf("Address of the variable count: %p \n", &count);
    // They are the same value. They should be the same value!
    
    // value at the address:
    printf("Value at the address: %d \n", *int_pointer);
    // print the value of the pointer itself
    printf("Value of the pointer: %p \n", (void*)int_pointer);
    // the cast to void* is to prevent a possible warning from the compiler.

    // checking the number of bytes of a pointer, we can use the sizeof() operator
    // cast it to a type int when printing
    printf("Size of int_pointer: %d bytes \n", (int)sizeof(int_pointer));
    // This changes depending on the OS (32 vs 64 bit) and the compiler.

    return 0;
}
