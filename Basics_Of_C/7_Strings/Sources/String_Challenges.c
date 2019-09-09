/* 
3 challenges for working with strings:

1) Given a string, create a function that will count the number characters in that string.
    - cannot use strlen() function 
    - return an int for the length 

2) Write a function to concatenate 2 character strings
    - cannot use the strcat() function 

3) Write a function that compares 2 functions
    - takes 2 arguments 
    - return a boolean 
*/


#include <stdio.h>
#include <stdbool.h>


// define string length function for challenge 1
int string_length(const char string[]) {
    int count = 0;
    
    while (string[count] != '\0') {
        count++;
    }

    return count;
}

// define concatenation function for challenge 2
void concat_function (char result[], const char str1[], const char str2[]) {
    int i = 0;
    int j = 0;

    for (i; str1[i] != '\0'; i++) {
        result[i] = str1[i];
    }

    for (j; str2[j] != '\0'; j++) {
        result[i + j] = str2[j];
    }

    // add in the final null terminator
    result[i + j] = '\0'; 
}

// compare function for challege 3
bool compare_function(const char str1[], const char str2[]) {
    int i = 0;
    bool is_equal = false;

    while (str1[i] == str2[i] && str1[i] != '\0' && str2[i] != '\0') {
        i++;
    }

    if (str1[i] == '\0' && str2[i] == '\0') {
        is_equal = true;
    } else {
        is_equal = false;
    }

    return is_equal;
}


int main() {
    const char sentence_1[] = "Hello World, my name is Shiva!";
    const char sentence_2[] = "Programming is awesome!";
    const char sentence_3[] = "C Programming";
    const char sentence_4[] = "C Programming";
    const char sentence_5[] = "C Programming!";
    char result[100];
    
    // test string length function for challenge 1
    printf("There are %d characters in sentence_1 \n", string_length(sentence_1));
    
    // test concatenation function for challenge 2
    concat_function(result, sentence_1, sentence_2);
    printf("%s \n", result);

    // test string equality for challenge 3
    // return value: 0 = false and 1 = true
    printf("%d \n", compare_function(sentence_3, sentence_4));
    printf("%d \n", compare_function(sentence_3, sentence_5));

    return 0;
}
