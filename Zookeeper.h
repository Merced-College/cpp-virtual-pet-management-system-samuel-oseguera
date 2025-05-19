#ifndef ZOOKEEPER_H
#define ZOOKEEPER_H

#include "Pet.h"
#include <vector>

// Manages pet pointer list
class Zookeeper {
private:
    // Stores pets
    std::vector<Pet*> pets;

public:
    // Adds pet to list
    void addPet(Pet* pet);
};

#endif // ZOOKEEPER_H
