/*
Prime Numbers challenge:
- Find all the prime numbers from 1 to 100 (Use an array)
- 1 and 2 can be hard coded since we know the first 2 are prime numbers 
- we can skip all even numbers since they're not prime
*/


#include <stdio.h>
#include <stdbool.h>

int main() {

    // create and initialize variables:
    int i;
    int j;
    int prime_array[50] = {0};
    int prime_index = 2;
    bool is_prime;

    prime_array[0] = 2;
    prime_array[1] = 3;

    // start the for loop starting at 5 (4 is not a prime number)
    for(i = 5; i <= 100; i = i+2) {

        is_prime = true;

        for(j = 1; is_prime && (i / prime_array[j] >= prime_array[j]); j++) {
            if(i % prime_array[j] == 0) {
                is_prime = false;
            }
        }
        
        if (is_prime==true) {
            prime_array[prime_index] = i;
            prime_index++;
        }
    }

    for(i=0; i<prime_index; i++) {
        printf("%d ", prime_array[i]);  
    }

    printf("\n");
    return 0;
}
