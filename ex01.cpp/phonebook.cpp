#include "phonebook.hpp"



void add()
{
	std::cout << "\033[0;33mTHIS IS A ADD COMMAND \033[0m " << std::endl;
	Contact contact[8];
	int i = 0;
	contact[i].index = (i + 1); 

	type_your_infos(contact[i]);
}
void search()
{
	std::cout << "\033[0;32mTHIS IS A ADD search \033[0m \n";
	Contact contact[8];
	int i = 0;
	contact[i].index = (i + 1);

	std::cout << "|";
	check_10("Index");
	check_10("First name");
	check_10("Last name");
	check_10("Nickname");
	check_10("Number");
	check_10("Darkest Secret");
	std::cout << std::endl;

	std::cout << "|";
	check_10(std::to_string(contact[i].index));
	check_10(contact[i].first_name);
	check_10(contact[i].last_name);
	check_10(contact[i].nickname);
	check_10(contact[i].number);
	check_10(contact[i].darkestSecret);
	std::cout << std::endl;
}

int main ()
{
	std::string command;
	while (true)
	{
		std::cout << "Enter your command [ADD, SEARCH, EXIT]:" <<std::endl;
		std::cout  <<  "\033[36m@>\033[0m";
		std::getline(std::cin, command);

		if (std::strcmp(command.c_str(), "ADD") == 0)
				add();
		else if (std::strcmp(command.c_str(), "SEARCH") == 0)
			search();
		else if (std::strcmp(command.c_str(), "EXIT") == 0)
			exit(0);
		else 
			std::cout << " 😒 :Enter your command [ADD, SEARCH, EXIT]";
	}
}
