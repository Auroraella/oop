#include "Person.h"


PersonList deepCopyPersonList(PersonList pl){
    PersonList person_copy;
    person_copy.numPeople = pl.numPeople;
    person_copy.people = new Person[pl.numPeople];
    for (int i = 0; i < pl.numPeople; ++i) {
        person_copy.people[i].name = pl.people[i].name;
        person_copy.people[i].age = pl.people[i].age;
    }
    return person_copy;
}
