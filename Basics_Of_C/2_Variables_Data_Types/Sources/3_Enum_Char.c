// Enums and Char 


#include <stdio.h>
#include <stdbool.h>


int main() {
    // Enums allow a programmer to define a variable and specify the values that could be stored in that variable.
    // First define the num type with the enum keyword, then give the enum a name.
    // Then give the list of values that are permissible within curly braces {}.

    enum month {Jan, Feb, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec}; 

    // To declare a variable of the enum type month our sytax will be: enum type var_name;
    enum month this_month;
    this_month = Feb;

    // The C compiler treats the values of enums as integer constants 
    // if we wanted to have a specific integer value assinged with an enum identifier, we can assign it when we define the enum.

    // Char represents a single character such as a letter, digit, or other special characters.
    // Single quotes in C are refered to as character data types
    // Character literals use single quotes.
    // char requires the value to be in single quotes. No quotes means that the value is a variable, double quotes means it's a string.

    char my_var;
    my_var = 'T';

    // We can do signed and unsigned to char, the compiler will refer to the numbers that are converted from the ASCII table.
    // We can do: char student_grade = 85; but this is poor style. The compiler will convert the number to the letter from the ASCII table.

    return 0;
}
