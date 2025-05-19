#ifndef LION_H
#define LION_H

#include "Pet.h" // Inherits from Pet base class

#include <string>
#include <iostream>

// Holds info for Lion's mood and Lion's mane length (in inches)
class Lion : public Pet {
private:
    std::string mood;        
    double maneLength;       

public:
    // Default constructor
    Lion();

    // Constructor with all parameters
    Lion(const std::string& name, const std::string& species, int age, int hungerLevel, const std::string& mood, double maneLength);

    // Setters
    void setMood(const std::string& mood);
    void setManeLength(double length);

    // Getters
    std::string getMood() const;
    double getManeLength() const;

    // Lion roar action
    void roar() const;

    // Overrides
    void printInfo() const override;
    void makeSound() const override;
};

#endif // LION_H
