#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <string>
# include <iostream>

class	AAnimal
{
	protected:
	std::string type;
	public:
	std::string	getType() const;
	AAnimal();
	AAnimal(std::string type);
	AAnimal(const AAnimal &obj);
	AAnimal&	operator=(const AAnimal &obj);
	virtual void	makeSound() const = 0;
	virtual ~AAnimal();
};

#endif