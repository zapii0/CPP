#include "Cat.hpp"

Cat::Cat() : Animal()
{
	type = "default cat";
	std::cout << "Cat " << type << " default constructor called\n";
}

Cat::Cat(std::string type) : Animal(type)
{
	this->type = type;
	std::cout << "Cat " << this->type << " constructor called\n";
}

Cat::Cat(const Cat &obj) : Animal(obj)
{
	std::cout << "Cat " << obj.type << " copy constructor called\n";
	this->type = obj.type;
}

Cat& Cat::operator=(const Cat &obj)
{
	std::cout << "Cat " << obj.type << " copy assignment operator called\n";
	if (this == &obj)
		return (*this);
	this->type = obj.type;
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "Cat sound: Meow!\n";
}

Cat::~Cat()
{
	std::cout << "Cat " << type << " destructor called\n";
}
