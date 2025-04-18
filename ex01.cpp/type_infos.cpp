#include "phonebook.hpp"

void check_10(std::string value)
{
	if (value.length() > 10) 
		value = value.substr(0, 9) + '.';
	std::cout << std::setw(10) <<  value  << "|";
	
}
void type_your_infos(Contact &contact)
{
	std::cout  << "Please enter the first name:" << std::endl << "\033[1;35m => \033[0m";
	std::cin >> contact.first_name ;

	std::cout  << "Please enter the last name:" << std::endl << "\033[1;35m => \033[0m";
	std::cin >> contact.last_name ;

	std::cout  << "Please enter the Nickname:" << std::endl << "\033[1;35m => \033[0m";
	std::cin >> contact.nickname ;

	std::cout  << "Please enter phone number:" << std::endl << "\033[1;35m => \033[0m";
	std::cin >> contact.number ;

	std::cout  << "Please enter the Darkest Secret:" << std::endl << "\033[1;35m => \033[0m";
	std::cin >> contact.darkestSecret;
	
}