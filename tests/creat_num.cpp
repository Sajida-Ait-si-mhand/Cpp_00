#include <iostream>

int main()
{
	std::string name = "Sojod";
	int num1 = 19;
	int num = 1;
	double time = 09.56;
	std::cout << "I am "<<  num1 + num << "My name is " <<  name ;
	std::cout << "Now it is youur turn !" << std::endl;
	std::string Name;
	std::cout << "What is your name?";
	std::cin >> Name;
	std::cout << Name << "is a beautiful name \n";
	return 0;
}