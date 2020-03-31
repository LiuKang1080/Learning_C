// Structures in C

/*
    Structures:
        - Another tool to group elements together. Similar to arrays, but more powerful.
        - Can group different element data types in a single name.

        - struct keyword = defines a collection of variables of various data types.

        ex)
        struct date {
            int month;
            int day;
            int year;
        };

        - The variables within the struct are called members or fields. Don't forget the trailing ; at the end of the strcut
        - This statement defines what the strcuture will look like to the C compiler, there is no memory allocation for this
            declaration.
        - This defines a new data type called date, varaibles can now be declared to be this data type "date"

        struct date todaysDate;
        strcut date purchaseDate;

        - Memory is now allocated for the 3 integers for each varaible declared

    Accessing Members of a Struct:
        - A struct variable name is not a pointer
        - We use a special syntax to access the individual members of a struct. We use the member selection operator or the dot 
            operator [ . ]
        - No spaces between the varaible name, the period, and the member name

        ex) 
        today.day = 20;
        today.year = 2018;

        - We use these member values within expressions:
        
        if (today.month == 12) {
            // code to do something;
        }

    General syntax of initializing a struct, defining a struct varaible, and setting member values:
        // define the struct
        struct date {
            int month;
            int day;
            int year;
        }; 

        // initialize a varaible using the stuct data type we defined
        struct date today;

        // set the individual member values
        today.year = 2018;
        today.day = 20;
        today.month = 9;

    Defining structs and varaibles at the same time: 
        struct date {
            int month;
            int day;
            int year;
        } today;

        - an instance of the date struct is created called today.
    
    Un-named structs:
        - We do not have to give a struct a tag name if all of the varaibles of a particular struct type are defined when the 
            struct is defined 
        - We use un-named structs once and once only.

        struct {
            int month;
            int day;
            int year;
        } today;

    Initializing structs:
        - Similar to arrays 
        
        struct date today = {7, 2, 2015};
        struct date date1 = {12, 10};           // we can initialize fewer values. (sets month and day values, but no year value) 

        - We can also manually set the values for each member value here as well

        struct date today = {.year=2015};
        struct date date1 = {.month=12, .day=10};

    Compound Literals:
        - You can assign 1 or more values to a struct in a single statement using a compund literal. 
        - C11 and beyond IS REQUIRED!.

        // define the struct
        struct date {int a, b, c;};

        // initialize today with the data type of the struct we created
        struct date today;

        // set the values for the struct using compound literals
        today = (struct date) {9, 25, 2015};
        OR
        // we can also combine the today initilization with the value setting in one line
        struct date today = (struct date) {9, 25, 2015};

        - This statement can appear anywhere in the program
        - This is not a declaration satement 
        - The type cast operator is used to tell the compiler the type of the expression 
        - The list of values follows the cast and we are to be assigned to the members of the struct in order
        - We can specify the values using the . member operator

        today = (struct date) {.month=9, .day=25, .year=2016};

        - Here the arguments can appear in any order
*/


#include <stdio.h>


int main() {

    return 0;
}
