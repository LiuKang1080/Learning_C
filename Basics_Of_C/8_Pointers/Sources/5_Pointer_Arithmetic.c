// Pointer Arithmetic in C

/*
    Pointer arithmetic in C 
        - Pointers point to addresses. The real power of the pointer to arrays is when we want to sequence through the elements of an array.
        - Individual elements of an array have their own address.

        - *p_values this pointer accesses the first element of the values array. This is equal to values[0]

        - To reference values[3] through pointers we can just add 3 to the pointer, we can then apply the indirection operator to dereference 
          it.

        - *(p_values + 3);

        - The general expression *(p_values + i) can be used to access the value contained in values[i]

        - ex) to set values[10] to 27 we can do it 2 ways: 
            1) values[10] = 27;
                or with pointers:
            2) *(p_values + 10) = 27;   

        - Because pointers are related to arrays, the pointer version will be more efficient in terms of memory and speed.
        - We can still use the address of operator if we wanted to assign to the pointer manually: assign to the second element of the values array
            p_values = &values[1]; 

        - If p_values points to the first element but we want it to point to the second values[1] element, we can simply do:
            p_values += 1;

        - This expression is valid C syntax and can be used on any data type. ex) char array, we can increment through each letter with pointer++
        -   Increment Operator ++   Same effect as adding 1 to the pointer 
            Decrement Operator --   Same effect as subtracting 1 to the pointer
        - BE CAREFUL for out of array bounds errors with ++ and -- 
*/


#include <stdio.h>


// sum all elements of an array 
int array_sum(int array[], const int n) {
    // declare variables: 
    int sum = 0;

    // declare pointers:
    int *pointer = NULL;
    // working with pointers, we need to assign the end of the array to the array + size of the array
    int *const array_end = array + n;

    // Loop through the array and add all elements
    // Setting pointer=array sets the address of the pointer to the first element of the array
    // We can use the pointer itself for the incrementation instead of incrementing the dummy variable i array[i], it will increment to 
    //      the next element of the array.
    for (pointer=array; pointer<array_end; ++pointer) {
        // derference the pointer and add the value of the array element it is pointing to to the sum
        sum += *pointer;
    }

    return sum;
}


int main() {
    // array of 10 elements:
    int values[10] = {3, 7, -9, 3, 6, -1, 7, 9, 1, -5};

    // print the total sum of the array by calling the function:
    printf("The sum is: %i \n", array_sum(values, 10));
    
    return 0;
}
