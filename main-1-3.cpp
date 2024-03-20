#include <iostream>
#include "Person.h"

using namespace std;

extern PersonList createPersonList(int n);

extern PersonList deepCopyPersonList(PersonList pl);

int main(){
    PersonList person_list1 = createPersonList(5);
    
    PersonList person_list2 = deepCopyPersonList(person_list1);
    
    std::cout<<person_list2.people[1].name;
    std::cout<<std::endl;
    return 0;
}