/*
    Demonstration of how values in an array can be changed using a pointer
    22/01/24
    by GameDev46
*/

#include <stdio.h>

// Declare a struct called Person which contains a name (string) and an age (int)
struct Person {
    char name[64];
    int age;
};

int main() {

    // Declare an array of the struct Person of length 100 called people
    struct Person people[100];

    // Create a pointer referencing the starting address of the people array
    struct Person *p_people = &people[0];

    // Iterate through the array and set the persons age to 0 before increasing the pointer by 1 (going to the next person)
    for (int i = 0; i < 100; i++) {

        p_people->age = 20;
        p_people += 1;

    }

    // End program
    return 0;
}