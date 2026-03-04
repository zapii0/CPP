#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include <iostream>
# include <string>
# include <cstdlib>

class	Contact
{
	private:
	std::string	_nickname;
	std::string	_first_name;
	std::string	_last_name;
	std::string _phone_number;
	std::string _secret;
	int			_index;
	public:
	void	ContactSetter();
};

class	PhoneBook
{
	private:
	Contact	_contacts[8];
	int		_next;
	public:
	void	AddContact();
	void	SearchContact();
	void	next_setter(int i);
};

typedef	enum t_codes
{
	ALPHABETICAL,
	ALPHANUMERICAL,
	NUMERICAL,
}	t_codes;

std::string	InputReader(std::string message, int flag);
#endif