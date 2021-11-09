// Pass By Reference and Pass By Value in C 

/*
Pass By Value | Pass By Reference in C:
    - There are 2 ways to pass data into a function:
        1) Pass by Value 
        2) Pass by Reference
        
    - C exculusively passes data into function by Value.
    - It simulates pass bhy reference because it can copy addresses.

    - Pass by Value = is when a function copies the actual value of an argument into the formal parameter of the function. 
        Changes made to the parameter inside the function have no effect on the argument.
    - Ex) passing in a int or double variable into the parameter of a function the variable outside does not change, because it 
        is copied.
    - Code within the function cannot change the arguments used to call the function.
    - There are no changes in the values, though theyt had been changed inside the function.

Passing Data Using Pointers:
    - You can pass a pointer as an argument into a function
    - You can return a pointer as a result from a function 

Pass By Reference:
    - Copies the address of an argument into the formal parameter. The address is used to access the actual argumnet used the
        function call.
    - The changes made to the parameter affect the passed argument.
    - Changes made inside are reflected outside the function unlike pass by value. 
    - We need to declare the function parameters as pointer types.
    - With pass by reference we do not need to use globabl varaibles. General programming guidelines suggest NOT using global
        variables, instead we want to use pointers and pass them by reference.

Returning Pointers:
    - It can provide a way for us to return a whole set of values instead of just a single value.
    - We would need to declare a function returning a pointer if we want to return a pointer, the declaration must match
    - Ex) 
        
        int *my_function() {
            // code block;
        }
*/


#include <stdio.h>


// Swap variables by Value
void swap_value(int x, int y) {
    int temp;

    // store x into temp
    temp = x;
    // store value of y into x
    x = y;
    // store temp into y
    y = temp;
}

// Swap variables by Reference
void swap_reference(int *x, int *y) {
    int temp;

    // store the value of the address x into temp
    temp = *x;
    // store y into x
    *x = *y;
    // store temp into y
    *y = temp;
}

// Square function for pass by reference challenge
void square(int *num) {
    // we need to dereference the value that is passed in and then square the value
    // (derference / value of num) = (derference / value of num) times (derference / value of num);
    *num = (*num) * (*num);
}


int main() {
    // initialize variables
    int a = 10;
    int b = 20;

    // Pass By Value example:
    // print values before the swap
    printf("Before value swap, value of a: %d \n", a);
    printf("Before value swap, value of b: %d \n", b);
    // swap variables by value
    swap_value(a, b);
    // print values after the swap
    printf("After value swap, value of a: %d \n", a);
    printf("After value swap, value of b: %d \n", b);
    // The values of a and b did not swap.

    printf("========== \n");
    // Pass By Reference example:
    // print values before the  swap
    printf("Before reference swap, value of a: %d \n", a);
    printf("Before reference swap, value of b: %d \n", b);
    // swap variables by reference
    swap_reference(&a, &b);
    // print values after the swap
    printf("After reference swap, value of a: %d \n", a);
    printf("After reference swap, value of b: %d \n", b);
    // The values of a and b both swapped.

    printf("=== Challenge === \n");
    /*
        Pass by Reference challenge:
            - Write a function that squares the number that is passed into the function.
            - The function should be defined having a parameter that is an int pointer.
    */
    
    // initialize variables for challenge
    int num = 5;

    // call the square function
    square(&num);
    // print the value 
    printf("The square of the given number is: %d \n", num);
    // With pass by reference we can see that the value changes outside of the function
    // Remember that C does not have true pass by reference, it does pass by value. It makes a copy of the addresses to 
    // simulate pass by reference.
    
    return 0;
}
