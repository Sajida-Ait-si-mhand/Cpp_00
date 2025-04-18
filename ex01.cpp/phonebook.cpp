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
void type_your_infos(Contact &contact, int i)
{
	contact.index = i;
	std::cout  << "Please enter the first name:";
	std::cin >> contact.first_name ;

	std::cout  << "Please enter the last name:";
	std::cin >> contact.last_name ;

	std::cout  << "Please enter phone number:";
	std::cin >> contact.number ;
}


int main (int ac, char *av[])
{
	if (ac == 1)
	{
		std::cout << "ENTER YOUR DS";
		exit (1);
	}
	Contact contact[8];
	int i = 0;
	// // if ADD => use the cin to output the user_name
	// // SEARCH Implimentation
	std::cout << "-----------------------------------------------" << std::endl;
	std::cout << "|";
	check_10("Index");
	check_10("Last name");
	check_10("First name");
	check_10("Nickname");
	std::cout << std::endl;
	
	std::cout << "|";
	std::cout << "\033[1;35m \n-- Contact " << (i + 1) << " -- \033[0m\n";
	type_your_infos(contact[i], i);
	check_10(std::to_string(contact[i].index));
	check_10(contact[i].first_name);
	check_10(contact[i].last_name);
	check_10(contact[i].number);

	 
	

	


















	std::cout << std::endl << "-----------------------------------------------" << std::endl;

}