#include <iostream>

class Cat{
	private:

	public :
		void Meowing()
		{
			std::cout  << "Meow" << std::endl;
		}

		std::string name;
		int age;
};
int main()
{
	Cat dogArray[3];
	dogArray[0].name = "SA";
	dogArray[1].name = "SA";
	dogArray[2].name = "HA";
	int i = 0;

	while( i < 3)
	{
		std::cout << dogArray[i].name << std::endl;
		i++;
	}
}