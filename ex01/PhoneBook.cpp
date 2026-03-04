#include "PhoneBook.hpp"

int	main(void)
{
	PhoneBook	PhoneBook;
	std::string	input_line;

	PhoneBook.next_setter(0);
	std::cout << "List of commands: ADD, SEARCH, EXIT\n";
	while (1)
	{
		std::getline(std::cin, input_line, '\n');
		if (input_line == "ADD")
			PhoneBook.AddContact();
		else if (input_line == "SEARCH")
			PhoneBook.SearchContact();
		else if (input_line == "EXIT")
			exit (0);
		else
			continue;
	}
}

void	PhoneBook::AddContact()
{
	this->_contacts[_next].ContactSetter();
	if (_next == 8)
		_next = 1;
	else
		_next++;
	std::cout << "Contact added\n";
	return ; 
}

void	PhoneBook::next_setter(int i)
{
	this->_next = i;
	return ;
}

void	PhoneBook::SearchContact()
{
	return ;
}

void	Contact::ContactSetter()
{
	_first_name = InputReader("First name:\n", ALPHABETICAL);
	_last_name = InputReader("Last name:\n", ALPHABETICAL);
	_nickname = InputReader("Nickname:\n", ALPHANUMERICAL);
	_phone_number = InputReader("Phonenumber:\n", NUMERICAL);
	_secret = InputReader("Darkest secret:\n", ALPHANUMERICAL);
	return ;
}

std::string	InputReader(std::string message, int flag)
{
	std::string input_line;
	bool error = true;
	while (error == true)
	{
		error = false;
		std::cout << message;
		getline(std::cin, input_line);
		if (input_line.empty())
			error = true;
		if (flag == ALPHABETICAL)
		{
			for (int i = 0;input_line[i]; i++)
			{
				if (!isalpha(input_line[i]))
					error = true;
			}
		}
		else if (flag == NUMERICAL)
		{
			for (int j = 0; input_line[j]; j++)
			{
				if (!isdigit(input_line[j]))
					error = true;
			}
			if (input_line.length() < 9 || input_line.length() > 11)
			{
				std::cout << "Number must contain from 9 to 11 nums\n";
				error = true;
			}
		}
	}
	return (input_line);
}
