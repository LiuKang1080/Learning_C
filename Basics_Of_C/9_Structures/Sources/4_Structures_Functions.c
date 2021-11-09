// Structures and Functions in C

/*
Passing a Structure into a Function
    - Ex)

        struct Family {
            char name[20];
            char father[20];
            char mother[20];
            int age;
        } 

        bool siblings(struct Family member1, struct Family member2) {
            if (strcmp(member1.mother, member2.mother) == 0) {
                return true;
            } else {
                return false;
            }
        }

    - We pass in structures like we do other varaibles. struct Family is the data type of the struct.
    - We can also pass in pointers that are pointing to structs into functions

        bool siblings(struct Family *p_member1, struct Family *p_member2) {
            if (strcmp(member1.mother, member2.mother) == 0) {
                return true;
            } else {
                return false;
            }
        }

    - Passing pointers to structs into functions is more efficient than passing in the structs themselves.
    - C passes data into functions as Pass by Value. This copies the data of the struct, if we have large structs we will be
        occupying more memory. For large structs it is better to pass in pointers to the structs into the functions. 
    - In older versions of C directly passing in structs into functions is not possible.

Returning Structures from functions
    - We can return structures from functions
        
        struct Date my_function(void);

    - This is a function prototype that returns the data type struct Date, and has no parameters.
*/


#include <stdio.h>


int main() {

    return 0;
}
