#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
	public:
	void	makeSound();
	Cat();
	Cat(std::string type);
	Cat(const Cat &obj);
	Cat& operator=(const Cat &obj);
	~Cat();
};

#endif