//
// Created by xxvms on 08/04/18.
//

#include "Person.h"
#include <iostream>

/*Person::Person(std::string firstName, std::string lastName, int
arbitraryNumber) { firstName = ""; lastName = ""; arbitraryNumber;
}*/

// Person::Person() {}
Person::Person(std::string first, std::string last, int arbitrary)
    : firstName(first), lastName(last), arbitraryNumber(arbitrary), pResource(nullptr) {
  std::cout << "Constructing " << firstName << " " << lastName << '\n';
}

// this is better way of initialization then one above
std::string Person::getName() const { return firstName + " " + lastName + " "; }

int Person::getNumber() const { return arbitraryNumber; }

void Person::setNumber(int x) {arbitraryNumber = x;}

void Person::setFirstName(std::string first) {firstName = first; }

void Person::addResource() {
  pResource = new Resource("Resource for " + getName());
}
Person::Person(Person const & person){
  pResource = new Resource(person.pResource->getName());
}

Person& Person::operator=(const Person &person) {
  delete pResource;
  pResource = new Resource(person.pResource-> getName());
  return *this;
}

Person::~Person() {
  std::cout << "Destructing " << firstName << " " << lastName << '\n';
  delete pResource;
}
