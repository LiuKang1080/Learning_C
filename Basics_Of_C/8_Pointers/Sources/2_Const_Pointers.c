// Const Keyword With Pointers in C

/*
Using the const keyword with pointers: 
    - Const for variables told the compiler that the value of the varaible cannot change.
    - We can use the const keyword when declaring a pointer to indicate that the value pointed to must not be changed.
    - Ex)

        long value = 9999L;
        const long *p_value = &value;   // define the pointer to be a const

    - Since we declared the pointer to be a const the compiler will check for any statements that attempt to change the value 
        pointed to by p_value pointer and flag all statements as errors.
    
    - We can still change long value. We cannot change long *p_value 
        
        value = 5555L;

    - We can do this since we're changing the variable value which is not a const, we did not use the pointer to make this change.

        long number = 8888L;
        p_value = &numnber;     // this is ok - changing the address in p_value

    - This will change the address stored in p_value to now point to number.
    - We still cannot use the pointer to change the value of that is stored.
    - You can change the address stored in the pointer as much as we want.
    - Using the pointer to change the value pointed to is NOT allowed, even after we changed the address stored in the pointer.

Using const to prevent the address of pointers from changing:
    - We can use the const keyword to NOT allow the address of pointer to change. We still use the const keyword but the syntax is different.
    - Place the const keyword AFTER the data type and AFTER the *
    - Ex) 

        int count = 25;
        int *const p_count = &count;    // defines a constant pointer

    - Pay attention to where the const keyword is in this example and the previous example.
    - This ensures that that the pointer always points to the same thing. The address stored must not be changed.
    - The compiler will check to see that we do not attempt to change what the pointer points to.

Example:

    - const int *   // value cannot be changed 
    - int *const    // pointer address cannot change

Constant Pointer and Constant Value:
    - We can create a constant pointer that points to a constant value
    - Ex)

        int item = 10;
        const int *const p_item = &item;

    - Though we can still change the variable item itself since that is not a const.
*/


#include <stdio.h>


int main () {

    return 0;
}
