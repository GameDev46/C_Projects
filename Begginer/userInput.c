/*
    Prints the users inputted message to the console
    25/02/24
    by GameDev46
*/

// Load the standard input/output C library
#include <stdio.h>

// Setup main function that is called when the program is run
int main() {

    // Setup the double in which the users input will be stored
    double userInput = 0.0;

    printf("Enter a number: ");
    // Wait for the user to input a number that will be stored in the userInput variable (note the & symbol before the variable name though!)
    scanf("%lf", &userInput);

    // Multiply the input number by 2
    userInput *= 2.0;

    // Print "Hello world" to the console
    printf("Double your number is %lf", userInput);

    // End the program
    return 0;
}