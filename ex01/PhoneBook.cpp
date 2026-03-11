#include "PhoneBook.hpp"

int	main(void)
{
	PhoneBook	PhoneBook;
	std::string	input_line;

	PhoneBook.Setter(1, 0);
	while (1)
	{
		std::cout << "List of commands: ADD, SEARCH, EXIT\n";
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
	this->_contacts[_index - 1].ContactSetter(_index);
	_index++;
	if (_index > 8)
		_index = 1;
	if (_num_contacts < 8)
		_num_contacts++;
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
	for (int i = 1; i <= _num_contacts; i++)
		_contacts[i - 1].PrintContact(1);
	std::string index = InputReader("Index must exist and be in range from 1 to 8:\n", INDEX, _num_contacts);
	int search_index = index[0] - '0' - 1;
	_contacts[search_index].PrintContact(0);
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
			if (input_line.length() != 1 || !isdigit(input_line[0]) || input_line[0] - '0' > num || input_line[0] - '0' < 1)
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

