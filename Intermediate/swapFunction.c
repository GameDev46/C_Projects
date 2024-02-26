/*
    Swaps the contents of 2 variables around using pointers
    26/02/24
    by GameDev46
*/

// Load the standard input/output C library
#include <stdio.h>

// Declare the swap function that takes in 2 integer pointers to be swapped
void swap(int *a, int *b) {

    // Store the value that *a (pointer a) points to in memory in the integer temp
    int temp = *a;

    // Set the value of a in memory to the value in memory that b points to (the value of b)
    *a = *b;
    // Set the value of b in memory to the integer stored in temp
    *b = temp;

    // Exit the function
    return;
}

// Setup main function that is called when the program is run
int main() {

    // Declare the startinf integers
    int a = 10;
    int b = 15;

    // Print their original values to the console
    printf("\n\nInt a is %d and int b is %d", a, b);

    // Swap the contents of the a and b integers (& before a variable name means "the address in memory of" that variable and is commonly called a pointer)
    swap(&a, &b);

    // Print their new values to the console
    printf("\n\nAfter swapping int a is %d and int b is %d\n\n", a, b);

    // End the program
    return 0;
}