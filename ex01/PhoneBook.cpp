#include "PhoneBook.hpp"

int	main(void)
{
	PhoneBook	PhoneBook;
	std::string	input_line;
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
	
}

void	Contact::ContactSetter()
{

}