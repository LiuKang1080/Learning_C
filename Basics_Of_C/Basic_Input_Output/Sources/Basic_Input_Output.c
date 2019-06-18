// # Signifies the preprocessor statements. Part of the C compilation process, done before compiling our source code.
// Pre-processor statements can be anywhere in the code but general convention is at the beginning of the file, serving as a "header".
#include <stdio.h>

/* 
2 ways to include header files: 
    1) <> ex) <header_file.h>
    2) "" ex) "header_file.h"
*/

// stdio (Standard Input/Output). Here the .h stands for a header file. 
// The compiler includes the contents from the header file, here in this case for the printf() function.

int main() {
    // printf() is our standard print function
    // The output goes to the standard output stream which by default is the command line.
    // printf("Printed statement \n");
    
    // the standard input is the scanf() function. scanf() reads from the standard input stream, and scans the input according to the format provided.
    // scanf() expects the input in the same format as we specify ex) %s and %d then our inputs we expect a string followed by a space or multiple spaces and then a number.

    char str[100];
    int i;
    // create a variable to store the value the user enters for scanf()

    printf("Enter a value :");
    scanf("%d", &i);
    printf("\nYou entered: %d\n", i);
    
    return 0;
}
