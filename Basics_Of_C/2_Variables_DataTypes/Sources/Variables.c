// Variables in C 
#include <stdio.h>

int main() {
    /*
    - All variables in C must begin with a letter or an _ 
    - Special characters like $ are not allowed in variables. ex) temp$value 
    - Spaces are not permitted in variables ex) my variable (my_variable is allowed).
    - reserved keywords are not allowed to be used as a variable. ex) int
    - All data types in C are primitive data types since C does not have objects.
    - All variables in C must be initialized before being used.

    General syntax for declaring variables:
    type-specifier variable-name;

        initialize single vairable:
        int x;

        initialize multiple variables:
        int x, y, z;

        initialize and assign variable in a single line: (assign values using the assignment operator = )
        int x = 112;

        int x, z = 12; 
        - The above line is valid, but this is poor form. Here only z is assigned a variable. x is initialized but not assigned anything. 
    */

    // initialize variable. We can initialize and assign a value in a single line, or we can just initialize and then assign the value at a later time.
    
    int my_var;
    my_var = 12;

    printf("%d", my_var);

    return 0;
}
