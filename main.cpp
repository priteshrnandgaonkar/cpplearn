#include <stdio.h>
#include <iostream>
#include "Person.h"

int main() {
    Person pritesh = Person("Pritesh", 24);
    std::cout << "Person -> name = " << pritesh.name() << std::endl;
}
