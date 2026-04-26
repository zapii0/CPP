#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string.h>
# include <iostream>

class	Animal
{
	protected:
	std::string type;
	public:
	Animal();
	Animal(std::string type);
	Animal(const Animal &obj);
	Animal&	operator=(const Animal &obj);
	virtual void	makeSound();
	virtual ~Animal();
};

#endif