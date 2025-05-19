#include "Lion.h"

// Default constructor
Lion::Lion() : Pet(), mood("Calm"), maneLength(0.0) {}

// Parameterized constructor
Lion::Lion(const std::string& name, const std::string& species, int age, int hungerLevel, const std::string& mood, double maneLength)
    : Pet(name, species, age, hungerLevel), mood(mood), maneLength(maneLength) {}

// Set the lion's mood
void Lion::setMood(const std::string& mood) {
    this->mood = mood;
}

// Set the lion's mane length
void Lion::setManeLength(double length) {
    this->maneLength = length;
}

// Get the lion's mood
std::string Lion::getMood() const {
    return mood;
}

// Get the lion's mane length
double Lion::getManeLength() const {
    return maneLength;
}

// Lion roar action
void Lion::roar() const {
    std::cout << getName() << " lets out a powerful ROAR!" << std::endl;
}

// Override to show all lion info
void Lion::printInfo() const {
    Pet::printInfo();
    std::cout << "Mood: " << mood << std::endl;
    std::cout << "Mane Length: " << maneLength << " inches" << std::endl;
}

// Override to make lion sound
void Lion::makeSound() const {
    std::cout << getName() << " growls: Grrr!" << std::endl;
}
