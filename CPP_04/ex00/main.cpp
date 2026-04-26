#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

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

    std::cout << "\nDELETING SUBJECT OBJECTS" << std::endl;
    delete meta;
    delete j;
    delete i;

    std::cout << "\nSTACK ALLOCATION TESTS" << std::endl;
    Cat stackCat;
    Dog stackDog;
    
    stackCat.makeSound();
    stackDog.makeSound();

    std::cout << "\nCOPY CONSTRUCTOR TESTS" << std::endl;
    Dog originalDog;
    Dog copyDog(originalDog);
    
    std::cout << "Original dog type: " << originalDog.getType() << std::endl;
    std::cout << "Copy dog type: " << copyDog.getType() << std::endl;
    copyDog.makeSound();

    std::cout << "\nASSIGNMENT OPERATOR TESTS" << std::endl;
    Cat catOne;
    Cat catTwo;
    
    catTwo = catOne;
    std::cout << "Cat two type: " << catTwo.getType() << std::endl;
    catTwo.makeSound();

    std::cout << "\nDESTRUCTORS FOR STACK OBJECTS" << std::endl;
    return 0;
}
