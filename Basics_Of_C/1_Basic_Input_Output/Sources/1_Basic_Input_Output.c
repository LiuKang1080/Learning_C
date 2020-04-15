// Basic Input and Output in C

/*
    - Comments in C are done with the double forward slashes //
    - Multi-line comments are done with / * * / (no spaces in between). Multi-line comments cannot be nested.

    - # Signifies a preprocessor statement. Part of the C compilation process, done before compiling our source code.
    - Pre-processor statements can be anywhere in the code but general convention is at the beginning of the file, serving as a "header".
    - 2 ways to include header files: 
        - 1) with <> ex) <header_file.h>
        - 2) with "" ex) "header_file.h"

    #include <stdio.h>
        - stdio (Standard Input/Output). Here the .h stands for a header file. 
        - The compiler includes the contents from the header file. 
        - We can use this functionality of the printf() function that is located in the stdio.h header file to print data to the
            standard output stream (generally the console)



*/


#include <stdio.h>


int main() {
    /*
        - printf() is our standard print function.
        - The output goes to the standard output stream which by default is the command line.
        - printf("Printed statement \n");
    
        - The standard input is the scanf() function. scanf() reads from the standard input stream, and scans the input 
            according to the format provided.
        - scanf() expects the input in the same format as we specify ex) %s and %d then our inputs we expect a string followed 
            by a space or multiple spaces and then a number.
    */

    // create a variable to store the value the user enters for scanf()
    char str[100];
    int i;

    printf("Enter a number: ");
    scanf("%d", &i);
    printf("\nYou entered: %d \n", i);
    
    return 0;
}
