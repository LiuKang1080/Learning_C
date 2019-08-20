/*
Functions in C:

General syntax for functions in C:

return_type function_name (parameters) {
    code_block;
}

- We need to initialize functions before we can use them. To use them we can just call them using the function_name 
  and passing in arguments if they're required.

- return_data_type: We must define if the function will return anything when initializing the function.
  ex) int my_function() The compiler is expecting that we return something of the int data type. If we do not return 
  anything then we will get a compiler error. If the expression we return is not of the return type then the compiler 
  will try to convert to the return type, if the conversion is not possible then the compiler will throw an error.

    - We can have more than 1 return statement, but multiple return statements followed by each other will result in a 
      compiler error. 

- void return: If the function does not return anything then we must use the void keyword (it is required!). If we use 
  the void keyword when creating the function then we cannot use the return keyword in the function body / code block, 
  we will get a compiler error otherwise.

- function prototypes: statement that defines a function, generally goes in header files. 
  ex) void print_message(void);  we define a function that returns nothing, and accepts no arguments. we can initialize 
  the function body at a later point.

  - If the function accepts no arguments, generally we use the void keyword as the parameter.

- Global and Local scoping:
  - Variables defined in a function are known as automatic local variables, they are automatically created everytime the 
    function is called.
  - Local variables: Can only be accessed by the function in which it is defined in, the variable cannot be accessed by other 
    functions.
  - Global Variables: Can be accessed by any function in the program. Global variables are defined outside any function generally
    at the beginning of the source file. Any function can change the value of the global varaible. If there is a local varaible 
    with the same name as the global varaible, then the local variable will replace the global varaible within the function.
  - Generally we want to avoid global variables due to coupling (dependecies) ex) if we have multiple functions using a single 
    global variable it could mean that all those functions are dependent on each other. It becomes harder to debug code, even if the 
    bug is found it could be difficult to fix problems. It is recommended that global varaibles should be avoided, if we need to pass
    data into functions we should just use parameters / arguments or if there is a lot of data then structs. 
*/

/*
Create 3 functions:
1) Greatest common divisor - given 2 ints return the greatest common divisor.
2) Absolute Value - Given a number positive or negative return the absolute value of that number. 
3) Square Root - write a square root function, must deal with both pasitive and negative cases.
*/


#include <stdio.h>


// Greatest Common Divisor function
int greatest_common_divisor(int x, int y) {
    int greatest_common_divisor;

    for (int i=1; i <= x && i <= y; ++i) {
        // check to see if i is a factor of both x and y
        if (x%i == 0 && y%i ==0) {
            greatest_common_divisor = i;
        }
    }
    
    return greatest_common_divisor;
}


// Absolute Value function
float absolute_value(float x) {
    // check to see if the entered value is less than zero
    // if less than zero then assign the inverse
    if (x < 0) {
        x = -x;
    }
    
    return x;
}


// Square Root function
// The square_root function will use the absolute_value function, we must define square_root() AFTER absolute_value() unless we
// use the function prototypes.
float square_root(float x) {
    // initialize variables
    const float epsilon = 0.00001;
    float guess = 1.0;

    // check to see if the entered value is negative
    if (x < 0) {
        printf("Negative argument provided to Square Root! \n");
        return -1.0;
    }

    // square root algorithm:
    while (absolute_value(guess * guess - x) >= epsilon) {
        guess = (x / guess + guess) / 2.0;
    }

    return guess;
} 


// Main Function
int main() {

    // test the GCD function 
    int result = 0;
    result = greatest_common_divisor(150, 35);
    printf("GCD between 150 and 35 is: %d \n", result);

    // test the absolute value function (test both positive and negative)
    printf("The absolute value of 50 is: %0.2f \n", absolute_value(50.00));
    printf("The absolute value of -25 is: %0.2f \n", absolute_value(-25.00));
    
    // test the square root function (test both positive and negative)
    printf("Square Root of 25 is: %0.2f \n", square_root(25.00));
    printf("Square Root of -10 is: %0.2f \n", square_root(-10.00));
    
    return 0;
}
