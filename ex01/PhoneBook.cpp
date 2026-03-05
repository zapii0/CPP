#include "PhoneBook.hpp"

int	main(void)
{
	PhoneBook	PhoneBook;
	std::string	input_line;

	PhoneBook.Setter(0, 0);
	std::cout << "List of commands: ADD, SEARCH, EXIT\n";
	while (1)
	{
		std::getline(std::cin, input_line, '\n');
		//trim stringa ba zrobic trzeba
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
	this->_contacts[_index].ContactSetter();
	if (_index == 8)
		_index = 1;
	else
		_index++;
	if (_index > _num_contacts)
		_num_contacts = _index;
	std::cout << "Contact added\n";
	return ;
}

void	PhoneBook::Setter(int i, int j)
{
	_index = i;
	_num_contacts = j;
	return ;
}

void	PhoneBook::SearchContact()
{
	
	std::string index = InputReader("Index of contact from 1 to 8:\n", INDEX, _num_contacts);
	int search_index = index[0] - '0';

	return ;
}

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
	
}

void	Contact::ContactSetter()
{
	_first_name = InputReader("First name:\n", ALPHABETICAL, 0);
	_last_name = InputReader("Last name:\n", ALPHABETICAL, 0);
	_nickname = InputReader("Nickname:\n", ALPHANUMERICAL, 0);
	_phone_number = InputReader("Phonenumber:\n", NUMERICAL, 0);
	_secret = InputReader("Darkest secret:\n", ALPHANUMERICAL, 0);
	return ;
}

std::string	InputReader(std::string message, int flag, int num)
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
		else if (flag == INDEX)
		{
			if (input_line.length() == 1 || !isdigit(input_line[0]) || input_line[0] - '0' > num)
				error = true;
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
