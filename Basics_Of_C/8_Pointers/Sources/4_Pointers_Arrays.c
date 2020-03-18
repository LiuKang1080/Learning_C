// Pointers and Arrays in C

/*
    Array: A collection of objects of the same data type that we can refer to using a single name.

    - Pointers to Arrays: We can use a pointer to hold the address of different varaibles at different times (must be the same data type)
    - One of the most common ways to use pointers is as pointers to arrays, especially with char pointers and char arrays.
    - The main reason to use pointers to arrays is for program efficiency and syntax. Pointers to arrays generally result in code that uses
      less memory and executes faster.
    - Generally we want to use pointers over arrays

    // create an array with 100 elements
    int values[100];

    // create a pointer 
    int p_values = NULL;

    - When we define a pointer that used to point to the elements of an array we do NOT designate the pointer as "pointer to array", we instead 
      designate the pointer to the data type of the individual element that is inside the array. 
    - There is NO such thing as: array *p_pointer = NULL;

    - To point the pointer to the first value of the array we do:
        p_values = values;
    - There is NO & (address of operator), we do not need it.   
    - The Arrays themselves are pointers in the background.
    - The C compiler treats the appearance of an array name without a subscript as a pointer to the array. Specifying values without subscripts
      has the effect of producing a pointer to the first element of the array.
    
    - We point to subsequent values in the array by incrementing the pointer to go to the next address (pointer arithmetic).

    - Manually setting the pointer to the first element in the array:
        p_values = &values[0];
    - Letting the C compiler do it for us:
        p_values = values;
*/


#include <stdio.h>


int main() {

    return 0;
}
