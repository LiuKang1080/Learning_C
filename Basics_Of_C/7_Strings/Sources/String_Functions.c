/* 
General purpose String Functions

Most of the general string functions are located in the string.h header file.
#include <string.h>

Getting the length of a string:
    We can get the length of a string by using the strlen() function. Returned as size_t.

    char my_string[] = "My String";
    printf("%d", strlen(my_string));
    
Copying Strings:
    Copying strings in C we can use 2 general functions: strcpy() and strncpy()

    Since we cannot assign arrays in C, we cannot assign strings. 

    char s[100];
    s = "Hello"; 

    this will NOT work! Instead we can use the strcpy() function. This is the string equivalent of the assignment operator

    char source[50] destination[50];
    strcpy(source, "This is the source");
    strcpy(destination, "This is the destination");

    strcpy() takes in 2 parameters: The first - where you are copying to. The second - the string that you're copying

    The strcpy() function does NOT check to see if the source string actually fits into the target string. Generally strncpy()
    is the safer way to copy strings. strncpy() takes in 3 arguments - the 3rd argument specifies the maximum number of characters
    to copy, specifying how much of the string we want to copy.

    strcpy(source, "Hello how are you doing?"); 
    strncpy(destination, source, 10);

    Here the content of source will go into destination copying only 10 characters.
    Generally use strncpy() rather than strcpy(), this will prevent buffer overflows.

String Concatenation:
    We use the strcat() funcation. Takes in 2 strings as arguments, takes a copy of the second string and attaches it to the end of the 
    first string, the combined version becomes the first string. The second string is not altered.

    Returns the value of its first argument, the address of the first character of the string to which the second string is appended.

    If there is not enough space in the first array, we can run into buffer overflow problems. Like strcpy() and strncpy() strcat() also has
    strncat() function. Takes another argument indicating the maximum number of characters to add. It will continue to add character until it 
    reaches the number specified or until it reaches the Null terminator, whichever one comes first.

Comparing Strings:
    We cannot use == this will only check to see if strings have the same memory address. We can use strcmp() function. 

    This does not compare arrays
    This does not compare characters
    We can use arguments that are in double quotes not single quotes

    returns 0 if 2 string arguments are the same, non-zero otherwise
    returns < 0 if str1 is less than str2
    returns > 0 if str2 is less than str1

    printf("The equality between (\"A\" and \"A\") is: ");
    printf("%d \n", strcmp("A", "A"));

    strncmp() continues until the strings differ or until it has compared a number of characters specified by a 3rd argument.
    There is no buffer overflow for strcmp().
*/


#include <stdio.h>
#include <string.h>


int main() {

    // Concatenation example:
    // initialize empty arrays.
    char source[100], destination[100];

    // copy content into empty arrays.
    strcpy(source, "This is the source");
    strcpy(destination, "This is the destination");

    // concatenate both strings. concatenate a maximum of 15 characters.
    // the concatenation will attach source onto destination for a max of 15 characters.
    strncat(destination, source, 15);
    printf("Final string: |%s|", destination);

    return 0;
}
