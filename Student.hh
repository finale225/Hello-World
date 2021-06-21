#ifndef STUDENT_H
#define STUDENT_H
#include <string>
using namespace std;

class Student {
    string major;
    int age;
public:
    Student() { age = 0; }
    void setMajor(string major) { this->major = major; }
    void setAge(int age) { this->age = age; }
    string getMajor() { return major; }
    int getAge() { return age; }
};

#endif