// Basic Data Types in C

/*
    Basic Data Types in C:
        - int
        - float
        - double
        - char 
        - _bool 
    
    int Data Type:
        - Contains whole numbers only, no decimals.
        - A minus sign indicates negative values.
        - The int data type is a signed integer, it must be an integer (positive, negative, or zero).
        - If an int is preceded by an 0 followed by an x then it is expressed as an hexadecimal value.
        
        int rgbColor = 0xFFEF0D; 

        - No embedded spaces.
        - Commas are not allowed to represent values greater than 999.

    float Data Type:
        - Stores floating point numbers (values containing decimal places).
        - floats can be expressed in scientific notation.
        - to explicitly create a float we can add an f or an F to the end of a number.

        float my_val = 2.69e7;
        
    double Data Type:
        - Similar to the float data type, used when the range of the float is not enough. 
        - Double the percision. 
        - 64 bits.
        - All floating point constants are taken as a double by the C compiler.

        double my_var;

    _Bool Data Type
        - Boolean data type
        - Stores 1 and 0 (representing True and False respectively) 

    C also offers 3 different adjective keywords to be used with the basic data types: short, long, and unsigned.
*/


#include <stdio.h>
#include <stdbool.h>


int main() {
    // examples of each data type:
    
    // int
    int int_var = 3892;

    // float
    float float_var = 3.14;

    // double 
    double double_var = 33.333e33;

    // boolean
    _Bool bool_var = 1;
    bool other_bool_var = true; 
    // The bool data type comes from the <stdbool.h> header file. 
    // We can't use this bool data type unless we include this header file. 
    // We cannot do: _Bool bool_var = true; If we use _Bool we must set the value to a 1 or 0. 
    // To use true and false we must include stdbool.h

    return 0;
}
