// Pointers and Arrays in C

/*
Pointers and Arrays:
    - An Array is a collection of objects of the same data type that we can refer to using a single name.
    - We can use a pointer to hold the address of different variables at different times. (Must be the same data type.)
    - One of the most common ways to use pointers is pointers to arrays. Especially with char pointers and char arrays.
    - The main reason to use pointers to arrays is for program efficiency and syntax. Pointers to arrays generally result in code
        that uses less memory and executes faster.
    - Generally when given the chance we want to use pointers over raw arrays.

        // create an array with 100 elements
        int values[100];

        // create a pointer
        int ptr_values = NULL;

    - When we define a pointer that used to point to the elements of an array we do NOT designate the pointer as "pointer to array",
        we instead designate the pointer to the data type of the individual element that is inside the array.
    - There is no such thing as: array *ptr_array = NULL;

    - To point the pointer to the first element of the array we do:

        ptr_values = values;

    - There is NO & (address of operator), we do not need it.
    - Arrays themselves are pointers in the background.
    - The C compiler treats the appearence of an array name without a subscript as a pointer to the array. Specifying values
        without subscripts has the effect of producing a pointer to the first element of the array.
    - We point to subsequent values of the array by incrementing the pointer to go to the next address (pointer arithmetic).
    
    - Ex) Manually setting the pointer to the first element of the array:

        ptr_values = &values[0];

    - We could let the compiler do it for us:

        ptr_values = values; 
*/


#include <stdio.h>


int main() {

    return 0;
}
