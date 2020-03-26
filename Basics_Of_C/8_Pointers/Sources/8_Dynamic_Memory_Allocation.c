// Dynamic Memory Allocation in C

/*
    Dynamic Memory Allocation
        - Can only be done on pointers 
        - Whenever we define a varaible in C, the compiler automatically allocates the correct amount of memory for that data type.
        - Using C's memory allocation ruotines we can dynamically alloate storage while the program is running.

        ex) If we designed a program to read in data from a file into an array in memory we have 3 options:
        1) Define the array to contain the maximum number of possible elements at compile time. The program will not work 
            if the data is larger than the amount of space we allocated.
        2) Use a variable-length array to dimension the size of the array at run-time. This will still result in a static array.
        3) Allocate memory dynamically using C's memory allocation routines. This is going to be the best option. We get storage 
            as we need it. Enables us to allocate memory as the program is running. Allocating memory dynamically is only possible
            because we have pointers available.

    Heap vs Stack
        - Dynamic memory allocation reserves space in a memory area called the heap.

*/


#include <stdio.h>


int main() {

    return 0;
}
