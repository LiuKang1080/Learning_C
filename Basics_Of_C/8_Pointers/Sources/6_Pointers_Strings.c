// Pointers and char arrays / strings in C

/*
    - Using pointers for char arrays will be the same as the examples for pointer arithmetic
    - There are 2 ways to define an array in functction parameters : 1) using the array itself 2) using pointers to that array

    ex) a function that copies the characters from a char array to another char array. We can do this in 2 ways:
    1) Array parameter: 
        
        void copy_string(char to[], char from[]) {  
            int i;

            for (i=0; from[i] !='\0'; ++i) {
                to[i] = from[i];
            }

            to[i] = '\0';                           // adding the NULL terminator to the end of the char array
        }

    2) pointer parameter:
        
        void copy_string(char *to, char *from) {
            for (; *from !='\0'; ++from, ++to) {    // incrementing both of the pointers by 1
                *to = *from;                        // dereferencing both of the pointers and then assigning the value
            }

            *to = '\0';                             // adding the NULL terminator to the end of the char array
        }

    - If we have a char array called text, we can define a pointer to point to the elements of the array 
        char *p_text = text_array;
    - p_text is pointing to the beginning of the array.
    - to point to the next element of the array we can use the increment operator: ++p_text
    - to point to the previous element of the array we can use the decrement operator: --p_text (We need to be sure that we do 
        not use this operator at the beginning of the array, we will get an Out Of Bounds Error.) 

    - While Loop with pointers:

        void copy_string(char *to, char *from) {
            while (*from) {                         // the NULL terminator is equal to 0, the while loop will end when it reaches
                                                    // the NULL terminator
                *to++ = *from++;                    // pay attention to where the ++ is, the incrementation happens AFTER this 
            }                                       //expression is evaluated

            *to = '\0';
        }
*/

#include <stdio.h>


// string length function:
int string_length (const char *pointer) {
    // *pointer will automatically be pointing to the beginning of the array.
    // create a local pointer that traverses the length of the char array.
    // We need to maintin const-ability whenever we can. When we're creating our local pointer if we do not create it as a const 
    //      then we are casting away the const. Generally if a pointer is pointing to something that is a const, then we should 
    //      create the pointer as a const pointer.
    const char *p_local = pointer;

    while (*p_local) {
        p_local++;
    }

    return p_local - pointer;
}


int main() {
    /*
        Challenge:
        1) Write a function that calculates the length of a string.
            - Function should take in a const char pointer as a parameter.
            - Use pointer arithmetic to determine the length of the string. Do not use the strlen function.
            - Use the incrementation operator (++pointer) to get to the end of the string.
            - Use a while loop using the value of the pointer as an exit condition.
            - The function should subtract 2 pointers, 1 pointing to the end of the string, the other pointing to the beginning
                of the string.
            - The function should return an int as the length of the given string. 
    */

    printf("The length of the string is %d \n", string_length("Hello"));
    printf("The length of the string is %d \n", string_length("Hello World"));
    printf("The length of the string is %d \n", string_length(""));

    return 0;
}
