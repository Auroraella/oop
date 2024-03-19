#include <iostream>
#include "Person.h"

extern PersonList createPersonList(int n);

int main() {
    int n = 3; // Example: Creating a PersonList with 3 Person structs
    PersonList myList = createPersonList(n);

    // Printing the details of the PersonList
    std::cout << "Number of people in the list: " << myList.numPeople << std::endl;
    for (int i = 0; i < myList.numPeople; i++) {
        std::cout << "Person " << i+1 << ": Name - " << myList.people[i].name << ", Age - " << myList.people[i].age << std::endl;
    }

    // Don't forget to delete the dynamically allocated array to prevent memory leaks
    delete[] myList.people;
    return 0;
}
