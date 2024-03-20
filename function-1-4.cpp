#include "Person.h"

PersonList shallowCopyPersonList(PersonList pl) {
    PersonList person_copy;
    person_copy.numPeople = pl.numPeople;
    person_copy.people = pl.people; 
    return person_copy;
}