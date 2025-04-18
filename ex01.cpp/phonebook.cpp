
#include "phonebook.hpp"

void add(Contact contact[], int &count)
{
	std::cout << "\033[0;33mTHIS IS A ADD COMMAND \033[0m " << std::endl;
	if (count >= 8)
	{
		std::cout << "PhoneBook is full!" << std::endl;
		return;
	}
	contact[count].index = (count + 1); 
	type_your_infos(contact[count]);
	count++;
}
void search(Contact contact[], int count)
{
	std::cout << "\033[0;32mTHIS IS A  SEARCH \033[0m \n";
	// if (count == 0)
	// {
	// 	std::cout << "No contacts yet." << std::endl;
	// 	return;
	// }
	contact[count].index = (count + 1);

	std::cout << "|";
	check_10("Index");
	check_10("First name");
	check_10("Last name");
	check_10("Nickname");
	check_10("Number");
	check_10("Darkest Secret");
	std::cout << std::endl;

	for (int i = 0; i < count ; i++)
	{
		std::cout << "|";
		check_10(std::to_string(contact[i].index));
		check_10(contact[i].first_name);
		check_10(contact[i].last_name);
		check_10(contact[i].nickname);
		check_10(contact[i].number);
		check_10(contact[i].darkestSecret);
		std::cout << std::endl;
	}
}

int main ()
{
	Contact contact[8];
	int count = 0;

	std::string command;
	while (true)
	{
		std::cout << "Enter your command [ADD, SEARCH, EXIT]:" <<std::endl;
		std::cout  <<  "\033[36m@>\033[0m";
		std::getline(std::cin, command);

		if (std::strcmp(command.c_str(), "ADD") == 0)
			add(contact, count);
		else if (std::strcmp(command.c_str(), "SEARCH") == 0)
			search(contact, count);
		else if (std::strcmp(command.c_str(), "EXIT") == 0)
			exit(0);
		else 
			std::cout << " 😒 :Enter your command [ADD, SEARCH, EXIT]";
	}
}