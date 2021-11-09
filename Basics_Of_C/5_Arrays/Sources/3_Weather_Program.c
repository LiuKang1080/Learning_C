// Weather Program Challenge in C

/*
Weather Program challenge:
    - Requirements:
        - Create a program that takes in rain fall data to calculate the average total rain fall over the course of 5 years. 
        - Find the total rain fall for each year.
        - Rain fall data are floats within a 2D array.
        - Rain fall data will cover each of the 12 months, over the course of 5 years
*/


#include <stdio.h>


int main() {
    // initialize the rain fall data (12 months, over 5 years)
    // dummy data is provided by Tim Buchalka's Learn Programming Academy - C Programming for beginners [Lecture 55]
    float rain_fall_data[5][12] = {
        {4.3, 4.3, 4.3, 3.0, 2.0, 1.2, 0.2, 0.2, 0.4, 2.4, 3.5, 6.6},
        {8.5, 8.2, 1.2, 1.6, 2.4, 0.0, 5.2, 0.9, 0.3, 0.9, 1.4, 7.3},
        {9.1, 8.5, 6.7, 4.3, 2.1, 0.8, 0.2, 0.2, 1.1, 2.3, 6.1, 8.4},
        {7.2, 9.9, 8.4, 3.3, 1.2, 0.8, 0.4, 0.0, 0.6, 1.7, 4.3, 6.2},
        {7.6, 5.6, 3.8, 2.8, 3.8, 0.2, 0.0, 0.0, 0.0, 1.3, 2.6, 5.2}
    };

    // initialize the total for the months and years 
    double yearly_total, monthly_sum;

    yearly_total = 0.00;
    // find the total rain fall for a year
    for (int i = 0; i < 5; i++) {
        monthly_sum = 0.00;

        for (int j = 0; j < 12; j++) {
            monthly_sum += rain_fall_data[i][j];
        }

        printf("Year: %d The total rain fall this year is: %0.2lf inches \n", i + 1, monthly_sum);
        printf("The monthly rain fall aveage for Year: %d is %0.2lf inches \n", i + 1, monthly_sum / 12);

        // The average of the total rain fall = total rain fall over all years / total number of years.
        yearly_total += monthly_sum;

        printf("\n");
    }

    // print the average total yearly rain fall 
    printf("The average of total rain fall over the course of 5 years: %0.2lf inches \n", yearly_total / 5);

    return 0;
}
