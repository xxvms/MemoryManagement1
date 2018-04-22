#include <iostream>
#include "Person.h"

int main() {
    Person Walter("Walter", "White", 345);
    Walter.addResource();
    Walter.setFirstName("Jessie");
    Walter.addResource();

    Person Jessie = Walter;
    return 0;
}