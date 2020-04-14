// Structure Challenges in C

/*
    Structure Challenges:

    Challenge 1:
        - Write a program that declares a structure and prints out its contents.
        - Create an employee strcuture with 3 members:
            - name (character array) 
            - hire_date (int)
            - salary (float)
        
        - Declare and initialize an instance of an employee type.
        - Read in a second employee and store it in a structure of type employee.
        - Print out the contents of each employee.

    Challenge 2:
        - Write a C program that creates a structure pointer and passes it to a function.
        - Create a struct named "item" with the members:
            - item_name: pointer
            - quantity: int
            - price: float
            - amount: float (stores quantity * price)

        - Create a function named read_item that takes a struct pointer of type item as a parameter.
        - Function should read in from the user a product name, price, and quantity.
        - The contents read in should be stored in the struct which will be passed into the function.
        
        - Create a function named print_item that takes as a parameter a struct pointer of type item.
        - Function prints the contents of the parameter.

        - The main() function should declare an item and a pointer to the item.
        - Allocate memory for the item_name pointer.
        - The item pointer should be passed into both the read and print item functions.
*/


#include <stdio.h>
#include <stdlib.h>


// Define the struct for challenge 2:
struct item {
    char *item_name;
    int quantity;
    float price;
    float amount;
};

// Function declarations for challenge 2:
void read_item(struct item *i);
void print_item(struct item *i);

int main() {
    /*
        Challenge 1:
    */

    // create the employee struct 
    struct employee {
        char name[30];
        char hire_date [15];
        float salary;
    };

    // initialize an instance of the employee struct
    struct employee emp1 = {"Bob", "1/1/11", 80000.00f};

    // print employee 1's information:
    printf("Employee 1's name is: %s \n", emp1.name);
    printf("Employee 1's hire date is: %s \n", emp1.hire_date);
    printf("Employee 1's salary is: %0.2f \n", emp1.salary);

    printf("========== \n");

    // read in data from the command line to store information about employee 2 in another instance of struct employee.
    printf("Enter employee information: \n");
    printf("Name: ");
    scanf("%s", emp1.name);
    printf("Hire Date: ");
    scanf("%s", emp1.hire_date);
    printf("Employee Salary: ");
    scanf("%f", &emp1.salary);
    printf("\n");

    // print out the entered struct information for employee 2
    printf("Employee 2's name is: %s \n", emp1.name);
    printf("Employee 2's hire date is: %s \n", emp1.hire_date);
    printf("Employee 2's salary is: %0.2f \n", emp1.salary);

    printf("========== \n");

    /*
        Challenge 2:
    */
    // initialize the instance of the struct item
    struct item itm;
    struct item *p_item;

    p_item = &itm;

    // allocate memory for the structs
    p_item->item_name = malloc(35 * sizeof(char));
    // check for NULL in memory allocation
    if (p_item == NULL) {
        exit(-1);
    }
    
    // call the read item function
    read_item(p_item);
    
    // print out the data
    print_item(p_item);

    // free the allocated memory
    free(p_item->item_name);
    
    return 0;
}

void read_item(struct item *i) {
    printf("Enter product name: ");
    scanf("%s", i->item_name);

    printf("Enter price: ");
    scanf("%f", &i->price);

    printf("Enter quantity: ");
    scanf("%d", &i->quantity);

    i->amount = (float)i->quantity * i->price;
}

void print_item(struct item *i) {
    printf("Name: %s \n", i->item_name);
    printf("Price: %0.2f \n", i->price);
    printf("Quantity: %d \n", i->quantity);
    printf("Total Amount: %0.2f \n", i->amount);
}
