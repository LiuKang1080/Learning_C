/*
Arrays in C:

- An array is a FIXED number of data items that are all the same data type.
- Once an array is created it cannot change its size.
    int my_array[10];

    // an array of the data type int, with 10 elements 

- Individual elements can be accessed by indexing. (indexing is zero based)
    my_array[4];

    // the 5th element of the array

- Out of Bounds Error: C programs still compile even if we specify an out of bounds index for an array, 
  we might get crashes or garbage data. The compiler does not check for out of bounds errors 

- Initializing an array: We need to manually initial all the values of an array, if we do not specify a specific element it will be 
  initialized to zero. We can specify a specific element by using a set of braces:
  
  int arr[10] = { [5]=200 }; 

  // here an array of size 10 where the 5th element is set to 200, the rest are defaulted to zero.

- multidimensional arrays:
  int matrix [4][5];

  // a 2 dimensional array (4 rows and 5 columns)

  int matrix [3][4] = {
      {10, 20, 30, 1},
      {40, 50, 60, 2},
      {70, 80, 90, 3}
  }

  // A 3X4 matrix 

- Higher dimensions will expand on the number of braces and brackets.

- variables and expressions can be used to set the size of the array. 
    int x = 8;
    float my_array[x];
    // set an array of size x 

    float my_array[sizeof(int) + 1];
    // expressions

    float my_array[(int)2.5];
    // type cast the float into a int constant
     
- We cannot use negative numbers, zero, or non-integer data types. 
*/


#include <stdio.h>

int main() {

    // Find the average of the numbers of an array of size 10.
    // create an array and use for loop to populate the array from 1 to 10, and find the average.
    double sum = 0;
    int my_array[10];
    // my_array has 10 elements all of them being defaulted to zero.

    for(int i=0; i<10; i++) {
        my_array[i] = i;
        sum += my_array[i];
        // printf("The iteration is: %d, and the sum is: %0.1lf \n", i, sum);
    }

    printf("Average of the 10 numbers = %0.2lf \n", sum/10);

    return 0;
}
