/*
    !!! DO NOT RUN THIS PROGRAM !!!
    Testing a uninitialized pointer
    There is one rule: DO NOT dereference a uninitialized pointer! We are only doing this for testing purposes.
*/


#include <stdio.h>


int main() {
    //uninitialized pointer
    // int *pt;
    
    // print the value of the pointer to see what it is:
    // printf("The value of the pt is: %p \n", pt);

    // dereference the pointer and assign a value
    // *pt = 5;
    
    // print the value of the pointer
    // printf("Value of pt: %p \n", *pt);

    /*
        When we run this code we get "exited with code=3221225477" This error code is ERROR_ACCESS_DENIED.
        3221225477 = 0xC0000005 which is an HRESULT that maps to ERROR_ACCESS_DENID.

        The Operating System is giving this error. The OS is saying that this program (The C executable) does not have access to the memory
        it is trying to access. This memory could be the memory of another program. Each process gets it's own memory address space and this
        program is trying to reach outside of our own memory space and into the another's memory space ot the system's/OS' memopry space.

        Modern popular OS will prevent this from happening, but other machine may not have this feature to protect you from doing this.
        DO NOT use an uninitialized pointer! Always set the pointer to NULL if you don't know what to initialize it to.
    */

    return 0;
}
