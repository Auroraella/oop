#include <iostream>
#include "Person.h"

extern Person* createPersonArray(int n);

int main() {
    int n = 5; // Example: Creating an array of 5 Person structs
    Person* peopleArray = createPersonArray(n);

    // Printing the array to verify the values
    for (int i = 0; i < n; i++) {
        std::cout << "Person " << i+1 << ": Name - " << peopleArray[i].name << ", Age - " << peopleArray[i].age << std::endl;
    }

    // Don't forget to delete the dynamically allocated array to prevent memory leaks
    delete[] peopleArray;
    return 0;
}
