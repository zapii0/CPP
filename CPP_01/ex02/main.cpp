#include <iostream>
#include <string>

int main(void)
{
	std::string var = "HI THIS IS BRAIN";
	std::string *stringPTR = &var;
	std::string &stringREF = var;
	std:: cout << "Var memory: " << &var << "\n";
	std:: cout << "PTR memory: " << stringPTR << "\n";
	std:: cout << "REF memory: " << &stringREF << "\n";

	std:: cout << "var value : " << var << "\n";
	std:: cout << "PTR value : " << *stringPTR << "\n";
	std:: cout << "REF value : " << stringREF << "\n";
}
