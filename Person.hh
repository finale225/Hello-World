#ifndef PERSON_H
#define PERSON_H
#include <string>
using namespace std;

class Person {
    string name;
    int age;
public:
    Person() { age = 0; }
    void setName(string name) { this->name = name; }
    void setAge(int age) { this->age = age; }
    string getName() { return name; }
    int getAge() { return age; }
};

#endif