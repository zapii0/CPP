#include "PhoneBook.hpp"

void	Contact::PrintContact(int i)
{
	if (i == 1) //default display
	{
		std::cout << "       " << _index << '|';
		FormatPrinter(_first_name);
		std::cout << '|';
		FormatPrinter(_last_name);
		std::cout << '|';
		FormatPrinter(_nickname);
		std::cout << '\n';
		return ;
	}
	else //searched contact
	{
		std::cout << "First name: " << _first_name << std::endl;
		std::cout << "Last name: " << _last_name << std::endl;
		std::cout << "Nickname: " << _nickname << std::endl;
		std::cout << "Phone: " << _phone_number << std::endl;
		std::cout << "Secret: " << _secret << std::endl;
	}
	return ;
}

void	Contact::FormatPrinter(std::string info)
{
	int limiter = 9;
	int length = info.length();
	int i;
	
	if (length < 9)
	{
		i = limiter - length;
		while (i--)
			std::cout << ' ';
		std::cout << info;
	}
	else
	{
		for (int j = 0; j <= 7; j++)
			std::cout << info[j];
		std::cout << '.';
	}
	return ;
}

void	Contact::ContactSetter(int index)
{
	_index = index;
	_first_name = InputReader("First name:\n", ALPHABETICAL, 0);
	_last_name = InputReader("Last name:\n", ALPHABETICAL, 0);
	_nickname = InputReader("Nickname:\n", ALPHANUMERICAL, 0);
	_phone_number = InputReader("Phonenumber:\n", NUMERICAL, 0);
	_secret = InputReader("Darkest secret:\n", ALPHANUMERICAL, 0);
	return ;
}
