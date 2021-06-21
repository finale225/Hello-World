#include <iostream>
#include "Student.hh"
#include "Person.hh"
using namespace std;

int main() {
    cout << "Hello World!" << endl;
    Student s;
    Person p;
    p.setName("Kevin");
    s.setMajor("Business");
    s.setAge(24);
    cout << p.getName() << ' ' << s.getMajor() << ' ' << s.getAge();
}