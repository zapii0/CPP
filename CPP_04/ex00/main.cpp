#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    std::cout << "SUBJECT TESTS" << std::endl;
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << "Type of j: " << j->getType() << std::endl;
    std::cout << "Type of i: " << i->getType() << std::endl;
    
    i->makeSound();
    j->makeSound();
    meta->makeSound();

    std::cout << "\nWRONG ANIMAL TESTS" << std::endl;
    const WrongAnimal* wrongMeta = new WrongAnimal();
    const WrongAnimal* wrongI = new WrongCat();

    std::cout << "Type of wrongI: " << wrongI->getType() << std::endl;
    
    wrongI->makeSound(); 
    wrongMeta->makeSound();

    std::cout << "\nDELETING SUBJECT OBJECTS" << std::endl;
    delete meta;
    delete j;
    delete i;
    delete wrongMeta;
    delete wrongI;

    return 0;
}
