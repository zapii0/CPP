#ifndef CONTACT_HPP
# define CONTACT_HPP

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

#endif
