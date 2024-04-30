#ifndef UNIVERSITY_H
#define UNIVERSITY_H

#include <string>
class University {
private:
    std::string name;
    std::string location;

public:
    University(std::string name, std::string location);
    void addCourse(int id, std::string name);
}

#endif //