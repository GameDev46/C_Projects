/*
    Circle area calculator
    22/01/24
    by GameDev46
*/

// Include the input/output standard library for C
#include <stdio.h>

// Declare the constant PI to be 3.14159
#define PI 3.14159

// Setup main function that is called when the program is run
int main() {
    // Declare area and radius to 0.0
    double area = 0.0, radius = 0.0;

    // Get address of radius "&radius" and write the input value to it
    printf("Enter radius: ");
    scanf("%lf", &radius);

    // Calculate and output area
    area = PI * radius * radius;
    printf("The area of the circle is %lf square metres", area);

    // End the program
    return 0;
}