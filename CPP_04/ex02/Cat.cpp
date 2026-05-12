#include "Cat.hpp"

Cat::Cat() : AAnimal()
{
	type = "Cat";
	_brain = new Brain();
	std::cout << "Cat default constructor called\n";
}

Cat::Cat(std::string type) : AAnimal(type)
{
	this->type = type;
	_brain = new Brain();
	std::cout << "Cat " << this->type << " constructor called\n";
}

Cat::Cat(const Cat &obj) : AAnimal(obj)
{
	std::cout << "Cat copy constructor called\n";
	this->type = obj.type;
	this->_brain = new Brain(*obj._brain);
}

Cat& Cat::operator=(const Cat &obj)
{
	std::cout << "Cat copy assignment operator called\n";
	if (this != &obj)
	{
		this->type = obj.type;
		delete this->_brain;
		this->_brain = new Brain(*obj._brain);
	}
	return (*this);
}

Cat::~Cat()
{
	delete _brain;
	std::cout << "Cat destructor called\n";
}

void Cat::makeSound() const
{
	std::cout << "Cat sound: Meow!\n";
}

Brain* Cat::getBrain() const
{
	return (_brain);
}