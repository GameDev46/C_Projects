/*
    Checks whether the CPU stack fills up or down
    22/01/24
    by GameDev46
*/

// Include the standard input/output library for C
#include <stdio.h>
// Include the standard boolean identifiers for C (true and false keywords)
#include <stdbool.h>

// Setup the checkCPUStackFill function that checks whether your computer's CPU stack fills upwards or downwards using recursion
bool checkCPUStackFill(volatile int* previousAddress) {

    // Setup a volatile int (an integer where the compiler doesn't optimise its location in memory)
    volatile int addressCheck = 0;

    // Check if the previousAddress has been left blank
    if (previousAddress == NULL) {

        // If left blank print the address in memory of the addressCheck variable and then recall the function with the address as the input
        printf("Primary Address: %p\n", &addressCheck);
        checkCPUStackFill(&addressCheck);

    } else {

        // If the previousAddress input is defined print the new value of the addressCheck varibale and then compare the previous address to address of the addressCheck variable
        printf("Secondary Address: %p\n\n", &addressCheck);
        
        // Check the previous address against the current to see how it has changed
        if (previousAddress < &addressCheck) {
            // If the previous adress is less then the new address then the CPU stack fills upwards (location in memory increases in value)
            return true;            
        } else {
            // If the previous adress is more then the new address then the CPU stack fills downwards (location in memory decreases in value)
            return false;
        }

    }
}

// Setup the main function which is called when the program is run
int main(void) {

    // Check whether the CPU stack fills upwards
    if (checkCPUStackFill(NULL)) {
        printf("CPU stack fills upwards");
    } else {
        printf("CPU stack fills downwards");
    }

    // End program
    return 0;
}