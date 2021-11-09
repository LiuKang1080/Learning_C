// Structures and Pointers in C

/*
Pointers pointing to Structures:
    - C supports pointers to structures. It makes working with strcutres easier.
    - In older versions of C, a struct cannot be passed as an argument into a function, but a pointer to a struct can be 
        passed to functions. Passing pointers to functions is more efficient.
    - define a variable to be a pointer to a struct:

        struct date *p_date = NULL;
        p_date = &todays_date;

    - The variable p_date can be assigned just like other pointers
    - We can indirectly access any of the struct members:
    
        (*p_date).day = 21;

    - The () is required! When derefrencing a pointer pointing to a strcut the () is required since the operator precedence 
        of member access operator (.) is higher than the indirection operator (*).

        if ( (*p_date).month == 12 ) {
            // code to do something;
        } 

    - Pointers to structs are so common in C that it has its own special operator, the Structure Pointer Operator ( -> )
    - The structure pointer operator allows (*x).y to be expressed as x->y
    - Dereference a pointer x pointing to a structure and access the member y.

        if (p_date->month == 12) {
            // code to do something;
        } 

    - Ex)

        // create a struct
        struct date {
            int month;
            int day;
            int year;
        }

        // initialize a variable of struct data type "date". Initialize a pointer to point to it. 
        struct date today;
        *p_date = &today;

        // access the member values of the struct instance
        p_date->month = 9;
        p_date->day = 25;
        p_date->year = 2016;

Pointers as members of Structures:
    - Pointers can also be members of structs

        struct int_pointers {
            int *p1;
            int *p2;
        }

    - Contains 2 members: int pointers 
    - We can now define a variable of type struct int_pointers 

        struct int_pointers pointers;

        int i1 = 100;
        int i2 = 50;

        pointers.p1 = &i1;
        pointers.p2 = &i2;

    - Access the member values of the struct and assign them the address of the ints i1 and i2
    - To get the value the pointer is pointing we need to dereference the pointer

        *pointers.p2 = 52;

    - PAY ATTENTION to what is happening here: The member access happens first. p2 gets accessed within the struct, and then
        the dereference happens second / last. *(pointers.p2) = 52;

    Character Arrays or Character Pointers?
        1)
        struct names {
            char first[20];
            char last[20];
        };

        2)
        struct p_names {
            char *first;
            char *last;
        };

    - Both are valid, but do different things:
        struct names CEO = {"Alice", "Summers"};
        struct p_names CTO = {"Bob", "Smith"}; 
        
        1) the struct names:
            - Strings are stored in the sentence.
            - Structure allocated the 40 bytes to hold the first and last names.

        2) the struct p_names:
            - Strings are stored wherever the compiler stores string constants.
            - Struct holds 2 addresses which takes up 16 bytes.
            - Struct p_names allocated NO space to store the strings.
            - It can only be used with strings that have had space allocated for them elsewhere such as string constants or 
                strings in arrays.
            - The pointers in p_names should only be used to manage strings that were created and allocated elsewhere in the
                program with malloc() and calloc().

    - One instance to use a pointer in a struct to handle a string is if you're dynamically allocating memory.
    - use a pointer to store the address

        struct name_count {
            char *first_name;
            char *last_name;
            int letters_count;
        };

    - The 2 strings are NOT stored inside the structure, they are stored in the chunk of memory allocated by malloc()
    - The addresses of the 2 strings are stored in the struct 
    - Addresses are what string handling functions typically work with.
*/


#include <stdio.h>


int main() {

    return 0;
}
