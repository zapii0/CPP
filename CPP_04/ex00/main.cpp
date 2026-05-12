#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>

int main()
{
    std::cout << "SUBJECT TESTS (PROPER POLYMORPHISM)\n";
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << "Type of j: " << j->getType() << "\n";
    std::cout << "Type of i: " << i->getType() << "\n";
    
    i->makeSound();
    j->makeSound();
    meta->makeSound();

    std::cout << "\n";
    std::cout << "WRONG ANIMAL TESTS (NO POLYMORPHISM)\n";
    const WrongAnimal* wrongMeta = new WrongAnimal();
    const WrongAnimal* wrongI = new WrongCat();

    std::cout << "Type of wrongI: " << wrongI->getType() << "\n";
    
    wrongI->makeSound(); 
    wrongMeta->makeSound();

    std::cout << "\n";
    std::cout << "DIRECT WRONG CAT TEST\n";
    const WrongCat* actualWrongCat = new WrongCat();
    actualWrongCat->makeSound(); 

    std::cout << "\n";
    std::cout << "DELETING OBJECTS\n";
    delete meta;
    delete j;
    delete i;
    delete wrongMeta;
    delete wrongI;
    delete actualWrongCat;

    return 0;
}