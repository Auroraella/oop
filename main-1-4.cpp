#include<iostream>
#include"Person.h"


extern PersonList shallowCopyPersonList(PersonList pl);

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

int main()
{
    PersonList person_list1 = createPersonList(5);
    
    PersonList person_list2 = shallowCopyPersonList(person_list1);
    
    std::cout<<person_list2.people[0].age;
    std::cout<<std::endl;
    return 0;
}
