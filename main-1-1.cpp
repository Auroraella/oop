#include <iostream>
#include "Person.h"

extern Person* createPersonArray(int n);

int main() {
    int n = 3; 
    Person* peopleArray = createPersonArray(n);

    
    for (int i = 0; i < n; i++) {
        std::cout << "Person " << i+1 << ": Name - " << peopleArray[i].name << ", Age - " << peopleArray[i].age << std::endl;
    }

    
    delete[] peopleArray;
    return 0;
}
