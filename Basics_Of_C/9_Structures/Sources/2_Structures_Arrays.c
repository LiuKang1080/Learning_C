// Structures and Arrays in C

/*
    Structures and Arrays:
        - We can create an array of structures

        struct date myDates[10];

        - Defines an array called myDates which contains 10 elements
        - Each element in the array is defined to be of the data type struct date
        
        General syntax for indexing and assigning values to the struct members within an array

        struct_name[index].member_name = value;
        ex)
        
        myDates[2].month = 8;
        myDates[2].day = 25;
        myDates[2].year = 2002;

        - These set the individual values of the members for the 3rd struct element within the array.
    
    Initialization of structs within arrays:
        struct date myDates[5] = { {12, 10, 2003}, {12, 11, 2001}, {9, 16, 2016} };

        - The first 3 elements are going to be initialized, the last 2 are not initialized.
        - Technically the inner braces are not required, but general programming pracice suggests to have them for readability.

        - We can individually initialize an element within the array
        struct date myDate[5] = { [2]={7, 15, 1992} };
        - initialize the 3rd element of the array
*/


#include <stdio.h>


int main() {
    
    return 0;
}
