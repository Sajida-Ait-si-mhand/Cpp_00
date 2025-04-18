#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>


class Contact
{
	private:
	public:
		std::string darkestSecret;
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

void check_10(std::string value);
void type_your_infos(Contact &contact);
#endif