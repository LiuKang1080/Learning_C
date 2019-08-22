/* 
Strings in C:

- Double quotes, single quotes are for the char data type. We cannot do: 
  char plus_sign = "+"; this will not work.
  Anything in double quotes is interpreted as a string by the compiler (including spaces and special characters).

- Null character:
  - Special character with the value of 0, added to the end of each string to mark where the string ends.
  - A string is ALWAYS terminated by the Null Character. The length of the string is always 1 greater than the number 
    of characters in the string.
  - NULL vs. Null Character:
    Null Character is a string terminator 
    NULL is a symbol that represents a memory address that doesn't reference anything.
  - We can explicitly add the \0 character to a string. Generally the compiler will do it for us. 
  - The first \0 that is found in a character sequence marks the end of a string, if there are multiple Null Character they 
    will be reached.

- Creating Strings in C:
  - C doesn't have a special variable type for strings. There are no special operators. The standard Library provides useful 
    function that will help with dealing with strings.
  - Since you cannot reassign arrays in C, you cannot do the same with strings.
    WE CANNOT DO:

    char s[100]; 
    s = "Hello";
    
    if we wanted to assign a value to a char array after it has been declared we need to use the strcpy() function from the standard 
    library.
     
  - Declaring strings:

    char my_word[7] = {"Hello!"};     

  - In the absence of a specific size, the compiler will automatically computes the number of elements of the array including the 
    Null Character.
  - If the size provided is too small then the compiler can't fit the \0 at the end of the array. The compiler WILL NOT try to fit 
    the Null Character, it WILL NOT complain about it, and it WILL NOT tell you about it. This leads to bug! PAY ATTENTION to the size 
    of arrays / strings / and where the Null Terminator is!
  - General Practice: Do not specify the size of the string when creating it. Let the compiler determine the size of the array.

    char my_word[] = {"Hello!"};

  - String format specifier = %s
  - Character format specifier = %c
  - Comparing 2 strings, we need to explicitly compare each individual element of both strings. With the Standard Library we can use 
    strcmp() function
*/


#include <stdio.h>


// Indexing an array to see where the Null Terminator is:
void small_array(void) {
    // We will create a large array and only populate the first few indicies with a string.
    char my_word[50] = {"Hello"};
    // Check to see where the null terminator is:
    printf("%s", my_word[5]);
    printf("%s", my_word[6]);   // Null Terminator is here!
    printf("%s", my_word[7]);

    // NOTE: An array of size 50 has been created in memory even though we're using only the first 5 indicies. Space is still
    // allocated for all 50 elements of the array!
}


int main() {

    // Program to manually count the number of characters in a given array. Generally we dont need to do this since 
    // we have the strlen() function in the standard library.
    char str1[] = {"Lorem ipsum dolor sit amet"};
    int count = 0;

    while (str1[count] != '\0') {
        count++;
    }

    printf("The length of the string \"%s\" is: %d characters. \n", str1, count);

    return 0;
}
