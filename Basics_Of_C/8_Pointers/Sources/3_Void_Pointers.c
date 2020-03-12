// Void Pointers in C 

/*
    The Void keyword with pointers
        - From functions we know that the void keyword is used to signify that the function will not return anything.
        - A pointer of the type void* can contain the address of a data item of any type.
        - Void* is usually used as a parameter or return type with functions that deal with data in a type-independent way.

        - Because the void* pointer allows us to deal with all data types does not mean we can abuse this concept and just use everywhere.
        
        - We need to cast to a specific data type when we dereference the void* pointer.  
        - The void pointer does not know what type of object it is pointing to so it cannot be dereferenced directly.
        - The void pointer must first be explicitly cast to another pointer type before it is dereferenced.
*/


#include <stdio.h>


int main() {

    // Void Pointer example:
    // initialize variables 
    int integerNumber = 10;
    float floatingNumber = 3.14;
    char characterValue = 'a';

    // initialize pointers
    void *p_voidPointer = NULL;

    // Set the void pointers to different data type addesses and print them:
    // int
    p_voidPointer = &integerNumber;
    printf("Value of integerNumber: %d \n", *(int *)p_voidPointer);

    // float
    p_voidPointer = &floatingNumber;
    printf("Value of floatingNumber: %0.2f \n", *(float *)p_voidPointer);

    //char 
    p_voidPointer = &characterValue;
    printf("Value of characterValue: %c \n", *(char *)p_voidPointer);

    /*
        *(data_type *) The first * is the dereference operator, the second * is the casting of the pointer to the new data type.
        - You read it like this: "Cast the void pointer into this new data type and then derference it."
        - The casting tells the compiler how to handle this pointer when dereferencing it.
    */

    return 0;
}
