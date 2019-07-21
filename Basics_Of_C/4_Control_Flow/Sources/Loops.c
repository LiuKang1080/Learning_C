/*
For loops in C
- Variables that are local to the loops will not exist once the loop ends.

General syntax for the For Loop:
for (starting_condition; continuing_condition; action_per_iteration) {
    code block;
}
- We can have multiple variables initialized in the starting_condition, we use the comma to seperate the variables

General syntax for the While Loop:
while(expression) {
    code block;
}
- The code block will not execute if the expression is evaluated to false

General Syntax for the Do-While Loop:
do {
    code block;
} while(expression);
- Since the expression evaluation is at the end of the do-while this is guarenteed to run at least once.

*/

#include <stdio.h>

int main() {

    // example of for loop using multiple variables
    for(int i=1, j=2;  i<=5; i++, j+=2) {
        printf("%d \n", i*j);
    }

    // Infinite loop, notice the second ; in the for loop statement, it is required for valid for loop syntax. No iterator count change is provided
    // int count = 5;
    // for(int i=1; i<=count;) {
        // printf("The count is %d", i);
    // }

    // while loop, pay attention to the expression condition and the iterations of variables to prevent inifinite loops
    // int count = 1;
    // while(count <= 5) {
        // printf("%d \n, count");
        // count++;
        // count++ is required to prevent infinite loop
    // }

    return 0;
}
