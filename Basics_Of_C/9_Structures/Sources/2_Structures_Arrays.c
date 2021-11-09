// Structures and Arrays in C

/*
Structures and Arrays:
    - We can create an array of structures

        struct date myDates[10];

    - Defines an array called myDates which contains 10 elements
    - Each element in the array is defined to be of the data type struct date
    - General syntax for indexing and assigning values to the struct members within an array

        struct_name[index].member_name = value;
        
    - Ex)
        
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
    - We can also initialize individually like this:

        struct date myData[5] = { [1].month=12, [1].day=15 };

Structures containing arrays:
    - Structs can contain arrays
    - Arrays are members like other member variables within the struct
    - Ex) struct called month that contains the number of days of the month, and a 3 letter char abbreviation for the month name

        struct month {
            int number_of_days;
            char name[3];         // 3 characters for this array
        };

    - Memory is not allocated at this stage, this is just defining the struct and its members.
        
    - Accessing the individual elements and setting the values for the array within the struct:

        // define variable of the dat type struct month
        struct month first_month;

        // set the values within the array 
        first_month.number_of_days = 31;
        first_month.name[0] = "J";
        first_month.name[1] = "a";
        first_month.name[2] = "n";

    - We could also use the strcpy() function from <string.h> strcpy(first_month.name, "Jan");
    - We can also initialize this way:

        struct month first_month = {31, {'J', 'a', 'n'} }; 
*/


#include <stdio.h>


int main() {
    
    return 0;
}
