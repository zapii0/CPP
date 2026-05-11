#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
	std::cout << "WrongCat default constructor called\n";
}

WrongCat::WrongCat(std::string type) : WrongAnimal(type)
{
	std::cout << "WrongCat " << this->type << " constructor called\n";
}

WrongCat::WrongCat(const WrongCat &obj) : WrongAnimal(obj)
{
	std::cout << "WrongCat copy constructor called\n";
	*this = obj;
}

WrongCat& WrongCat::operator=(const WrongCat &obj)
{
	std::cout << "WrongCat copy assignment operator called\n";
	if (this != &obj)
		this->type = obj.type;
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called\n";
}

void WrongCat::makeSound() const
{
	std::cout << "WrongCat sound: Baaa!\n"; // Will only print if called on an actual WrongCat pointer/reference
}
