#include <iostream>

class Dog{
	private:
		int age;
	public:
		void bark();
		std::string name;

};

void Dog::bark() // "This function belongs to the Dog class."
{
	std::cout << "WOOF!" << std::endl;
}

int main()
{
	Dog d_Dog;
	d_Dog.bark();
	std::cout << "Please Enter Your Dog name:  " ; 
	std::getline(std::cin, d_Dog.name);

	std::cout << "This is an amazing dog name :" << d_Dog.name;

}