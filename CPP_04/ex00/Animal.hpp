#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>
# include <iostream>

class	Animal
{
	protected:
	std::string type;
	public:
	std::string	getType() const;
	Animal();
	Animal(std::string type);
	Animal(const Animal &obj);
	Animal&	operator=(const Animal &obj);
	virtual void	makeSound() const;
	virtual ~Animal();
};

#endif