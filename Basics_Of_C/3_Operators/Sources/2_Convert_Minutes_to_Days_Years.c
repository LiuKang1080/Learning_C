// Operators challenge.

/*
    - Convert the number of minutes into days and years challenge.

    - Requirements:
        - Create variables of the data type double.
        - Allow user to enter in the number of minutes via the command line.
        - Convert the number of minutes into days and years.
        - Display the results days and years by printing the data.
*/


#include <stdlib.h>


int main(int argc, char *argv[]) {

    // declare and initialize variables:
    double days = 0.00;
    double years = 0.00;

    // capture data from the command line.
    char *minutes_entered = argv[1];

    // convert string into int data type:
    int minutes = atoi(minutes_entered);

    // perform day and year calculation 
    years = (minutes / (60.00 * 24.00 * 365.00));
    days = ((minutes / 60.00) / 24.00);

    printf("Minutes entered: %d minutes \n", minutes);
    printf("Number of minutes in days: %lf days \n", days);
    printf("Number of minutes in years: %lf years \n", years);

    return 0;
}
