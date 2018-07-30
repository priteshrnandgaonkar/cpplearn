#pragma once
#include <string>

class Person {
    std::string _name;
    int _age;
public:
    Person(std::string name, int _age);
    std::string name();
    int age();
};
