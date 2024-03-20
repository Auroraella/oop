#include<iostream>
#include"Person.h"

extern PersonList createPersonList(int n);
extern PersonList shallowCopyPersonList(PersonList pl);

int main()
{
    PersonList person_list1 = createPersonList(5);
    
    PersonList person_list2 = shallowCopyPersonList(person_list1);
    
    std::cout<<person_list2.people[0].age;
    std::cout<<std::endl;
    return 0;
}
