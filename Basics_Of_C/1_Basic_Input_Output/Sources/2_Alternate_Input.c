// Alternative form for reading inputs from the keyboard in C


#include <stdio.h>


int main() {
    //Create a variable called name:
    char name[20];

    printf("Hello, What is your name? \n");

    // Here we use the alternative form for input the fgets() function.
    fgets(name, 20, stdin);
    printf("Hello there, %s", name);

    return 0;
}
