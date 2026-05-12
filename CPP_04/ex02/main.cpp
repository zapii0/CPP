#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"
#include <iostream>

int main()
{
    std::cout << "ABSTRACT CLASS TEST\n";

    // AAnimal* test = new AAnimal(); // COMPILER ERROR NOW!

    const AAnimal* j = new Dog();
    const AAnimal* i = new Cat();

    std::cout << "\n";
    std::cout << "Type of j: " << j->getType() << "\n";
    std::cout << "Type of i: " << i->getType() << "\n";

    i->makeSound();
    j->makeSound();

    std::cout << "\n";
    std::cout << "DELETING OBJECTS\n";
    delete j;
    delete i;

    std::cout << "\n";
    std::cout << "ARRAY TEST STILL WORKS\n";
    const int arraySize = 4;
    AAnimal* animals[arraySize];

    for (int k = 0; k < arraySize / 2; k++) {
        animals[k] = new Dog();
    }
    for (int k = arraySize / 2; k < arraySize; k++) {
        animals[k] = new Cat();
    }

    std::cout << "\n";
    for (int k = 0; k < arraySize; k++) {
        delete animals[k];
    }

    return 0;
}