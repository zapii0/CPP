#ifndef CAT_HPP
# define CAT_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"

class Cat : public AAnimal
{
	private:
		Brain* _brain;
	public:
		Cat();
		Cat(std::string type);
		Cat(const Cat &obj);
		Cat& operator=(const Cat &obj);
		virtual ~Cat();
		void makeSound() const;
		Brain* getBrain() const;
};

#endif