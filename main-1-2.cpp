#include <iostream>
#include "Person.h"

extern PersonList createPersonList(int n);

int main() {
    int n = 6;
    PersonList myList = createPersonList(n);


    std::cout << "Number of people in the list: " << myList.numPeople << std::endl;
    for (int i = 0; i < myList.numPeople; i++) {
        std::cout << "Person " << i+1 << ": Name - " << myList.people[i].name << ", Age - " << myList.people[i].age << std::endl;
    }

    delete[] myList.people;
    return 0;
}
