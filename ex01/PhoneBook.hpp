#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <string>
# include <cstdlib>
# include "Contact.hpp"
class	PhoneBook
{
	private:
	Contact	_contacts[8];
	int		_index;
	int		_num_contacts;
	public:
	void	AddContact();
	void	SearchContact();
	void	Setter(int i, int j);
};

typedef	enum t_codes
{
	ALPHABETICAL,
	ALPHANUMERICAL,
	NUMERICAL,
	INDEX,
}	t_codes;

std::string	InputReader(std::string message, int flag, int num);
#endif