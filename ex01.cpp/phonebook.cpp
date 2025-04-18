#include <iostream>
#include <iomanip>

class Contact
{
	private:
		std::string darkestSecret;
	public:
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string number; // +
		int index;

};

class PhoneBook
{
	private:
		Contact contacts[8];
	public:


};

void check_10(std::string value)
{
	if (value.length() > 10) 
		value = value.substr(0, 9) + '.';
	std::cout << std::setw(10) <<  value  << "|";
	
}
void type_your_infos(Contact &contact)
{
	std::cout  << "Please enter the first name:";
	std::cin >> contact.first_name ;

	std::cout  << "Please enter the last name:";
	std::cin >> contact.last_name ;

	std::cout  << "Please enter phone number:";
	std::cin >> contact.number ;
}
void add()
{
	std::cout << "\033[0;33mTHIS IS A ADD COMMAND \033[0m";
}
void search()
{
	std::cout << "\033[0;32mTHIS IS A ADD search \033[0m";
}
void exit()
{
	std::cout << "\033[0;37mTHIS IS A ADD exit \033[0m";
}
int main ()
{
	std::string command;
	std::cout << "Enter your command [ADD, SEARCH, EXIT]:" <<std::endl;
	std::cout  <<  "\033[36m@>\033[0m";
	std::getline(std::cin, command) ;
	std::cout << "This is the command " << command << std::endl;

	if (std::strcmp(command.c_str(), "ADD") == 0)
	{
		add();
	}
	else if (std::strcmp(command.c_str(), "EXIT") == 0)
	{
		exit();
	}
	else if (std::strcmp(command.c_str(), "SEARCH") == 0)
	{
		search();
	}
	else 
		std::cout << "NADA";
	// Contact contact[8];
	// int i = 0;
	// contact[i].index = (i + 1); 

	// type_your_infos(contact[i]);

	// std::cout << "|";
	// check_10("Index");
	// check_10("First name");
	// check_10("Last name");
	// check_10("Number");
	// std::cout << std::endl;

	// // while (i < 3)
	// // {
	// 	std::cout << "|";
	// 	check_10(std::to_string(contact[i].index));
	// 	check_10(contact[i].first_name);
	// 	check_10(contact[i].last_name);
	// 	check_10(contact[i].number);
	// 	std::cout << std::endl;
	// 	// i++;
	// // }
	
}
