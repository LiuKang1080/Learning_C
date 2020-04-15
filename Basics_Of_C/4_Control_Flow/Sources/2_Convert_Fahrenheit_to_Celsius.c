// Fahrenheit to Celsius challenge

/*
    - A small program to convert degrees Fahrenheit to degrees Celsius.
    - Requirements:
        - Take in Fahrenheit via the command line.
        - Convert Fahrenheit to Celsius and print the result using the general formula:
            Celsius = (Fahrenheit - 32) * (5/9)
        - Ensure that temperature does not go below 0 kelvin (-273.15 Celsius) (-459.67 Fahrenheit).
*/


#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {

    // check to see if the proper number of arguments are provided by the user.
    if (argc < 2) {
        printf("Invalid number of arguments.");
        return 1;
    }

    // initialize the Fahrenheit variable
    double fahrenheit = atof(argv[1]);

    // check to see if Fahrenheit is above absolute zero, if so initialize celsius and perform fahrenheit to celsius conversion.
    if (fahrenheit > -459.67) {
        double celsius = ((fahrenheit - 32.00)) * 5 / 9;
        printf("You have entered %.2lf degrees Fahrenheit \n", fahrenheit);
        printf("which is %.2lf degrees Celsius \n", celsius);
    } else {
        printf("You have entered a value below Absolute Zero!");
    }

    return 0;
}
