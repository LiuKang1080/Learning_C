// Void Pointers in C 

/*
Void Pointers:
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
    int integer_number = 10;
    float floating_number = 3.14;
    char character_value = 'a';

    // initialize pointers
    void *p_void_pointer = NULL;

    // Set the void pointers to different data type addesses and print them:
    // int
    p_void_pointer = &integer_number;
    printf("Value of integer_number: %d \n", *(int *)p_void_pointer);

    // float
    p_void_pointer = &floating_number;
    printf("Value of floating_number: %0.2f \n", *(float *)p_void_pointer);

    //char 
    p_void_pointer = &character_value;
    printf("Value of character_value: %c \n", *(char *)p_void_pointer);

    /*
        *(data_type *) The first * is the dereference operator, the second * is the casting of the pointer to the new data type.
        - You read it like this: "Cast the void pointer into this new data type and then derference it."
        - The casting tells the compiler how to handle this pointer when dereferencing it.
    */

    return 0;
}
