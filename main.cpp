#include <iostream>
#include "Person.hh"
using namespace std;

int main() {
    cout << "Hello World!" << endl;
    Person p;
    p.setName("Kevin");
    p.setAge(24);
    cout << p.getName() << ' ' << p.getAge();
}