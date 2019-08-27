/* 
More String Functions

General purpose string functions are located in the string.h header file
#include <string.h>

Searching, Tokenizing, and Analyzing Strings in C

Searching Strings:
    Search a string to find a single character or a substring, we can use strchr() and strstr() functions.
    
    strchr() is used for searching for a single character in a string. The first argument is the string to be searched,
    the second argument is the character we're looking for. Function will search the string from the beginning and return
    a pointer to the first position in the string where the character is found. If the character is not found it will return 
    NULL 
    
    strstr() is used for searching for a substring within a string. The search IS case sensitive! First argument is the string
    to be searched, the second argument is the substring to be found

Tokenizing Strings:
    A token is a sequence of characters within a string that is found by a delimiter(space, comma, period, etc).
    Breaking a sentence into words is called tokenizing.

    We use the strtok() function.

Analyzing Strings:
    There are many functions relating to analyzing strings 
    - islower()     Test to see if character is lower 
    - isupper()     Test to see if character is upper
    - isalpha()     Test to see if character is alpha character
    - isdigit()     Test to see if character is a digit 

    NOTE: These functions are not located in string.h! They are located in ctype.h
    #include <ctype.h>

    generally these functions will return pointers.
*/


#include <stdio.h>
#include <string.h>
#include <ctype.h>


int main() {
    
    // Tokenization example
    char str[100] = "Hello, how are you - my name is - Shiva";
    // the delimiter 
    const char s[2] = "-";
    char *token;
    // get the 1st token 
    token = strtok(str, s);

    // get the rest of the tokens 
    while (token != NULL) {
        printf("%s\n", token);
        token = strtok(NULL, s);
    }

    printf("\n");


    // Example to find the number of letters and numbers in a given a string
    // initialize variables
    int n_letters = 0;
    int n_numbers = 0;
    int n_punctuation = 0;
    char my_string[] = "There are 15,000 ants on the ant-hill"; 
    int i = 0;

    while (my_string[i]) {
        if (isalpha(my_string[i])) {
            n_letters++;
        } else if (isdigit(my_string[i])) {
            n_numbers++;
        } else if (ispunct(my_string[i])) {
            n_punctuation++;
        }
        i++;
    }

    printf("The string contained: %d letters, %d digits, and %d punctuation characters. \n", n_letters, n_numbers, n_punctuation);

    return 0;
}
