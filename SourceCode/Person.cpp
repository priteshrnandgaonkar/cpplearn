#include "Person.h"

std::string Person::name() {
    return _name;
}

int Person::age() {
    return _age;
}

Person::Person(std::string name, int age) {
    _name = name;
    _age = age;
}
