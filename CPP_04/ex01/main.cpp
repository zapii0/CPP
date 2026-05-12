#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"
#include <iostream>

int main()
{
    std::cout << "SUBJECT ARRAY TEST\n";
    const int arraySize = 6;
    Animal* animals[arraySize];

    for (int i = 0; i < arraySize / 2; i++) {
        animals[i] = new Dog();
    }

    for (int i = arraySize / 2; i < arraySize; i++) {
        animals[i] = new Cat();
    }

    std::cout << "\n";
    std::cout << "DELETING ARRAY\n";
    for (int i = 0; i < arraySize; i++) {
        delete animals[i];
    }

    std::cout << "\n";
    std::cout << "PROVING DEEP COPY (COPY CONSTRUCTOR)\n";
    Dog dogA;
    dogA.getBrain()->ideas[0] = "I want a bone";
    
    Dog dogB(dogA);
    
    std::cout << "Before modifying copy:\n";
    std::cout << "Dog A idea: " << dogA.getBrain()->ideas[0] << "\n";
    std::cout << "Dog B idea: " << dogB.getBrain()->ideas[0] << "\n";
    
    dogB.getBrain()->ideas[0] = "I want a toy";
    
    std::cout << "After modifying copy:\n";
    std::cout << "Dog A idea: " << dogA.getBrain()->ideas[0] << "\n";
    std::cout << "Dog B idea: " << dogB.getBrain()->ideas[0] << "\n";

    std::cout << "\n";
    std::cout << "PROVING DEEP COPY (ASSIGNMENT OPERATOR)\n";
    Cat catA;
    catA.getBrain()->ideas[0] = "I want fish";

    Cat catB;
    catB = catA;
    
    std::cout << "Before modifying copy:\n";
    std::cout << "Cat A idea: " << catA.getBrain()->ideas[0] << "\n";
    std::cout << "Cat B idea: " << catB.getBrain()->ideas[0] << "\n";

    catB.getBrain()->ideas[0] = "I want sleep";
    
    std::cout << "After modifying copy:\n";
    std::cout << "Cat A idea: " << catA.getBrain()->ideas[0] << "\n";
    std::cout << "Cat B idea: " << catB.getBrain()->ideas[0] << "\n";

    std::cout << "\n";
    std::cout << "END OF TESTS\n";

    return 0;
}