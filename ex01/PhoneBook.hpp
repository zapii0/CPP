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
	void		FormatPrinter(std::string info);
	public:
	void	ContactSetter(int index);
	void	PrintContact(int i);
};

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