//
// Created by xxvms on 22/04/18.
//

#include <iostream>
#include "Resource.h"

Resource::Resource(std::string n): name(n) {
    std::cout << "constructing\n";
}

Resource::~Resource() {
    std::cout << "destructing\n";
}