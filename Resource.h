//
// Created by xxvms on 22/04/18.
//

#ifndef MEMORYMANAGEMENT_RESOURCE_H
#define MEMORYMANAGEMENT_RESOURCE_H


#include <string>

class Resource {
private:
    std::string name;
public:
    Resource(std::string n);
    ~Resource(void);
    std::string getName() const { return name;}

};


#endif //MEMORYMANAGEMENT_RESOURCE_H
