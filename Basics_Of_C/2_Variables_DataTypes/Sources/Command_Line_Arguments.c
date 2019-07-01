// Using command line arguments to pass data into the program.
#include <stdio.h>


/*
Generally there are 2 ways to pass data into a program:
    1) take the data from the user directly via inputs
    2) supply the data into the program at the time of execution using command line arguments

main() is the entry point into the C program. 2 arguments are passed into the main() function when called by the runtime system. 
    1) argc (Argument Count) = integer value that specifies the number of arguments types into the command line
    2) argv (Argument Vector) = array of character pointers (strings), where the first entry in the array is the pointer to the name of the program.
*/


int main(int argc, char *argv[]){
    int number_of_arguments = argc;
    char *argument1 = argv[0];
    char *argument2 = argv[1];

    printf("Number of arguments: %d \n", number_of_arguments);
    printf("Argument 1 is the name of the program: %s \n", argument1);
    printf("Argument 2 is the command line argument: %s \n", argument2);

    return 0;
}
