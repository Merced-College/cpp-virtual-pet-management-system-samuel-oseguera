#include <iostream>
#include <vector>
#include "Dog.h"
#include "Cat.h"
#include "Lion.h"
#include "Zookeeper.h"

int main() {
    // Create pets
    Pet* pet1 = new Dog("Rex", "Dog", 3, 6, "German Shepherd");
    Pet* pet2 = new Cat("Whiskers", "Cat", 2, 4, "Feather Wand");
    Pet* pet3 = new Lion("Simba", "Lion", 5, 3, "Playful", 12);

    // Add pets to Zookeeper
    Zookeeper z;
    z.addPet(pet1);
    z.addPet(pet2);
    z.addPet(pet3);

    // Store pets in vector
    std::vector<Pet*> pets = {pet1, pet2, pet3};

    // Display info for each pet
    std::cout << "Pet Info:\n";
    for (Pet* pet : pets) {
        pet->printInfo();
        std::cout << std::endl;
    }

    // Play pet sounds
    std::cout << "Pet Sounds:\n";
    for (Pet* pet : pets) {
        pet->makeSound(); 
    }

    // Call lion roar action
    Lion* lionPtr = dynamic_cast<Lion*>(pet3);
    if (lionPtr) {
        lionPtr->roar();
    }

    // Compare names of two pets
    std::cout << "\nComparing pet1 and pet3 by name: ";
    int result = pet1->compareTo(*pet3);
    if (result < 0) std::cout << pet1->getName() << " comes before " << pet3->getName() << "\n";
    else if (result > 0) std::cout << pet1->getName() << " comes after " << pet3->getName() << "\n";
    else std::cout << "Both pets have the same name.\n";

    // Clean up
    for (Pet* pet : pets) {
        delete pet;
    }

    return 0;
}
