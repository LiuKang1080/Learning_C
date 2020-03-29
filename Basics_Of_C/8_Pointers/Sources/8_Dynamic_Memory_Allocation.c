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
        - The Stack: Another location where memory is allocated. Function arguments and local variables in a function are stored 
            here. When the execution of a function ends the space allocated to store the arugments and local variables are freed.
        - When a function is called the function and the local variables it will use will get placed into the stack. Once the 
            function is done running the data related to the function and it's local variables will be freed. This is one of the
            reasons why when we dynamically allocate memory it goes to the heap instead of the stack, data lasts longer in the heap
            compared to the stack.
        - We get to control when things enter the heap and when it gets deleted. We have NO control over what / when data enters
            and gets deleted in the stack, the compiler will automatically do that for us.

    Dynamic Memory Allocation Functions
        - There are 3 major function that we can use in C to dynamically allocate memeory: malloc, calloc, and realloc
        - In order to use these function we need to include the stdlib.h header file.
        
        1) malloc()
            - This is the simplest memory function. It will allocate the memory at run-time. 
            - We specify the number of bytes of memory we want to allocate as the argument.
            - This function returns the address of the first byte of memory that is allocated.
            - Since the function returns an address a pointer is the only variable that can store it.

            General Syntax:
            int *p_number = malloc(100);

            - We request 100 bytes of memory to be allocated and assigned the memory block to p_number 
            - p_number will point to the first int location at the beginning of the 100 bytes that was allocated
            
            - There is an issue using malloc() in this manner. In this example int can hold 4 bytes each, totaling 25 ints.
            - This code may or may not work on ALL systems, because the size of an int can be different on different systems  

            - We need to remove the assumption that all systems will have an int size of 4 bytes. We can do this by using the 
                sizeof() operator.
            
            General Syntax:
            int *p_number = malloc(25 * sizeof(int));

            - Here we are saying to allocate 25 blocks of int whatever the size of an int is.
            - malloc() returns a pointer of type void, so we need to perform this cast.
            
            - We can request any number of bytes.
            - If the memory amount we request can not be allocated for any reason then malloc() will return a NULL
            - It is ALWAYS a good idea to check any dynamic memory allocation request immediately by using an if statement
                to make sure the memory is actually there before we can use it

            int *p_number = malloc(2500000 * sizeof(int));
            if(!p_number) {
                // code to deal with memory allocation failure;
            }

            - This is important that we perform these checks. We do NOT want the program to continue running if we can't properly
                allocate the memory, this will result in a crash!
            
        Releasing Memory
            - When we allocate memory dynmically, we should ALWAYS release the memory when it is no longer required
            - Memory that we allocate to the heap will automatically be released when the program ends, but we should manually
                free the memory even if its right before the program end
            - The best programming practice is to ALWAYS manually release the memory when we're done using it.

            - Memory Leaks = When we allocate memory dynamically and we do not retain the reference to it, we are unbale to release
                the memory. Often occurs within a loop, since we do not release the memory when it's no longer required, the program
                consumes more and more memory in each loop iteration.
            - To free the memory that we have dynamically allocated we must still have access to the address that references the 
                block of memory.

            - In order to release the memory we can call the free() function. Need to #include <stdlib.h> header file.

            free(p_number);
            p_number = NULL;

            - the free() function has a formal parameter of type void* you can pass a pointer of any type as an argument.
            - As long as p_number contains the address that was returned when the memory was allocated, the entire block will 
                be freed.
            - General programming guidelines suggest that we should set the pointer that was pointing to dynamically allocated 
                memory to NULL after it has been freed.

        2) calloc()  
            - Similar to malloc(). It allocates memory as a number of elements of a given size, it initializes memory that is 
                allocated so that all bytes are set to zero.
            - calloc() takes in 2 arguments: 1) The number of data items for which space is allocated. 2) Size of each data item
            - Requires the stdlib.h header file 

            int *p_number = calloc(50, sizeof(*p_number))  // 50 spaces will be reserved of each being the size of an int

            - The initilizations will be set to 0
            - The return value will be NULL if it cannot allocate the space for whatever reason.

        3) realloc()
            - Enables us to extend memory that we previously allocated using malloc() or calloc()
            - Expects 2 arguments: 1) A pointer that contains the address that was previously returned by a call to malloc() or
                calloc(). 2) The size in bytes of the new memory that we want allocated.
            - Returns a void* pointer to the new memory, or returns a NULL if the allocation fails for whatever reason
            - Transfers the contents of the previously allocated memory referenced by the pointer 
            - realloc() preserves the contents of the original memory area.
*/


#include <stdio.h>
#include <string.h>
// stdlib.h for the malloc(), calloc(), realloc(), and free() functions 
#include <stdlib.h>


int main() {
    
    /*
        Dynamic Memory challenge:
        - Write a program that allows a user to input text as a string. The program will print the text that was inputted.
        - Program will use dynamic memory allocation. 
        - user can enter the limit of the string they are entering, we can use it in malloc().
        - Program uses a char pointer. Do not use char arrays.
        - Release the memory after you're done using it.
    */

    // initialize variables and pointers
    int size = 0;
    char *p_text = NULL;

    // ask user for the string size
    printf("Enter the character limit of the text: ");
    scanf("%d", &size);

    // allocate memory 
    p_text = malloc(size * sizeof(char));

    // ensure that the memory allocation is successful
    if (p_text != NULL) {
        printf("Enter your text: \n");
        scanf(" ");
        fgets(p_text, 1024, stdin);

        printf("You entered: %s \n", p_text);
    }

    // free the memory we allocated
    free(p_text);
    p_text = NULL;

    return 0;
}
