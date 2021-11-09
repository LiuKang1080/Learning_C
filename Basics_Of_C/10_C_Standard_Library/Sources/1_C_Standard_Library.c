// The C Standard Library

/*
Standard Header Files:
    - <stddef.h> 
        - Contains some of the standard definitions and constants.
        - Constants like NULL are in this header file.

    - <limits.h>
        - Contains various implementation-defined limits for character and integer data types.

    - <stdbool.h>
        - Contains the substitute for _Bool data type: bool
        - true = 1
        - false = 0

Various Functions:
    - <string.h>
        - Contains various functions for working with strings.
        - char strcat(s1, s2);  = concatenates 2 strings together. 
        - char strchar(s, c);   = Searches the string for the first occurrance of character c, if found pointer to the char
                                    is returned, else NULL pointer is returned.
        - int strcmp(s1, s2);   = Compares two strings together. Return value < 0 if s1 is less than s2. Return 0 if equal.
                                    Return > 0 if s1 is greater than s2.
        - char strcpy(s1, s2);  = Copies the string s2 to s1. 
        - size_t strlen(s);     = Returns the number of characters in s excluding the NULL Terminator.
        - char strstr(s1, s2);  = Searches the string s1 for the first occurrance of s2. If found a pointer to the start of 
                                    s2 is returned, else NULL pointer is returned.
        - char strtok(s1 s2);   = Breaks s1 into tokens based on the delimiter characters in s2.

    - <ctype.h>
        - Contains functions for dealing with characters.
        - isalpha(), isblank(), islower(), isupper(), isdigit()
        - int tolower();
        - int toupper();
        
Input / Output Functions:
    - <stdio.h>
        - Contains I/O functions and definitions. NULL is defined here along with stdin, stdout, FILE, and printf()

Dynamic Memory Functions:    
    - <stdlib.h>
        - malloc(), calloc(), realloc(), and free() are defined in this header file.

Math Functions:
    - <math.h>
        - double sin(x), double cos(x), double tan(x)       = regular sin, cos, tan functions 
        - double asin(x), double acos(x), double atan(x)    = arc sin, arc cos, and arc tan functions
        - double ceil(x)                                    = Returns the smallest integer value greater than or equal to x
        - double floor(x)                                   = Returns the largest integer value less than or equal to x
        - double log(x)                                     
        - double pow(x, y)                                  = power function. x raised to the power y 
        - double sqrt(x)                                    = square root function
        - double nan(s)                                     = Returns NaN if possible. String gets passed in, int conversion
            
        - Complex Aritmetic is for dealing with complext numbers is also contained in this header file

Utility Functions:
    - <stdlib.h>
        - int abs(n)            = Returns absolute value of n
        - void exit(n)          = Terminates the program execution, closing any open files, and returning an exit status
        - char *getenv(s)       = Get enviornment, returns a pointer to the value of the environment variable pointed to by
                                    s. used to get environment variables from the OS
        - int rand(void)        = Returns a random number in the range [0, RAND_MAX]
        - void srand(seed)      = Seeds the random number generator
        - int system(s)         = Gives commands contained in the char array pointed to by s to the system for execution
                                    ex) system("mkdir /usr/tmp/data");

Assert Library:
    - <assert.h>
        - Designed to help with debugging programs.
        - Contains the assert(); macro.

Other Header Files:
    - <time.h>
        - Contains functions for working with dates and times.

    - <errno.h>
        - Defines functions for the reporting of errors.
*/


#include <stdio.h>


int main() {

    return 0;
}
