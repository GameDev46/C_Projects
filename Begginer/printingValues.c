/*
    Demonstration of printing the value of variables to the console
    26/02/24
    by GameDev46
*/

// Load the standard input/output C library
#include <stdio.h>

// Setup main function that is called when the program is run
int main() {

    // Print an integer to the console ( \n just means new line )
    int myInteger = 5;
    printf("\nThe value of myInteger is %d", myInteger);

    // Print a float to the console
    float myFloat = 5.0f;
    printf("\nThe value of myFloat is %f", myFloat);

    // Print a double (float but with 15 to 16 significant figures) to the console
    double myDouble = 5.0;
    printf("\nThe value of myFloat is %f", myDouble);

    // Print a double (float but with roughly 15 to 19 significant figures) to the console
    long double myLongDouble = 103.0;
    printf("\nThe value of myLongDouble is %lf", myLongDouble);

    // Print a char (a single letter) to the console
    char myChar = 'H';
    printf("\nThe value of myChar is %c", myChar);

    // End the program
    return 0;
}