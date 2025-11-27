#include <iostream>
#include <string>


int main(void){

	std::cout << std::string(60,'-') << std::endl;

	std::string brain = "HI THIS IS BRAIN";
	std::string* stringPTR = &brain;
	std::string& stringREF = brain;

	std::cout << "The memory address of the string variable is: ";
	std::cout << &brain << std::endl;
	std::cout << "The memory address held by stringPTR is:      ";
	std::cout << stringPTR << std::endl;
	std::cout << "The memory address held by stringREF is:      ";
	std::cout << &stringREF << std::endl << std::endl;

	std::cout << std::string(60,'-') << std::endl;
	std::cout << "The value of the string variable is:   ";
	std::cout << brain << std::endl;
	std::cout << "The value pointed to by stringPTR is : ";
	std::cout << *stringPTR << std::endl;
	std::cout << "The value pointed to by stringREF is : ";
	std::cout << stringREF << std::endl;

	return (0);
}