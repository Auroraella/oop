#include <iostream>
#include "Person.h"

using namespace std;

extern PersonList deepCopyPersonList(PersonList pl);

PersonList createPersonList(int n) {
    PersonList list;
    list.numPeople = n;
    list.people = new Person[n];
    for (int i = 0; i < n; i++) {
        list.people[i].name = "Jane Doe";
        list.people[i].age = 1;
    }
    return list;
}

int main(){

    PersonList person_list1 = createPersonList(5);
    
    PersonList person_list2 = deepCopyPersonList(person_list1);
    
    std::cout<<person_list2.people[1].name;
    std::cout<<std::endl;
    return 0;
}