// Converting strings in C

/* 
    - Convert string into all upper or lower case.
        - Convert string into all upper case: We can use the toupper() function.
        - Convert string into all lower case: We can use the tolower() function.

        Both functions return int (ASCII), we can use the (char) type casting to convert from int into a chars.

    - Converting string into a number:
        We can convert a string into a number by using the ASCII to convertion functions in <stdlib.h> header file.
            - atof() (ACII to float) = type double will be produced. "INF" or "INFINITY" are recognized as inifnity. 
                "NAN" is Not A Number.
            - atoi() (ASCII to int) = type int will be produced.
            - atol() (ASCII to long) = type long will be produced.
            - atoll() (ASCII to long long) = type long long will be produced.

    - There are new functions in the later standards of C
        - strtod() = String to double. takes in 2 arguments, the first is the string, the second is the pointer ptr 
        - strtof() = converts to type float, in all other respects it works like strtod()
        - strtold() = converts to type long double, in all other respects it works like strtod().
*/


#include <stdio.h>


int main() {
    
    return 0;
}
