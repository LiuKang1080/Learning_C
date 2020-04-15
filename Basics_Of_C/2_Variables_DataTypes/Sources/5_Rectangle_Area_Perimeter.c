// Basic C program that displayes the area and perimeter of a rectangle

/*
Requirements:
    - Create a program that displayes the area and perimeter of a rectangle with the correct print formats.
    - 4 variables of the type double: 
        - width
        - height
        - perimeter
        - area
*/


#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
    char *argument1 = argv[1];
    char *argument2 = argv[2];

    // The data type given from the command line is in the form of a string, we need to convert it into a double.
    // We need to include the C Standard Library #include <stdlib.h>
    // We can use the atof() function provided by the standard library.

    double width = atof(argument1);
    double height = atof(argument2);

    // Calculate the area and the perimeter of the rectangle.
    double area = width * height;
    double perimeter = 2.0*(width + height);

    printf("The Width provided is: %lf \n", width);
    printf("The Height provided is: %lf \n", height);
    printf("The Area of the rectangle is: %lf \n", area);
    printf("The Perimeter of the rectangle is: %lf \n", perimeter);

    return 0;
}
