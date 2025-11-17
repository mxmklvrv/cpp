#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <iostream>

void	messageWelcome(void)
{
	std::cout << "Welcome to the Phonebook app." << std::endl;
	std::cout << std::endl;
	std::cout << "Type \"ADD\" command if you want to save a new contact." << std::endl;
	std::cout << "Type \"SEARCH\" command if you want to display a specific contact." << std::endl;
	std::cout << "Type \"EXIT\" command and guess what will happend." << std::endl;
	std::cout << std::endl;
}

void	messageWrongInput(void)
{
	std::cout << "Only \"ADD\" or \"SEARCH\" or \"EXIT\" acceptable." << std::endl;
}
void	errorExit(std::string message)
{
	std::cout << std::endl << message << std::endl;
	exit(1);
}

int	main(void)
{
	PhoneBook	pbook;

	std::string input;
	messageWelcome();
	while (input != "EXIT")
	{
		std::cout << "Type your command: ";
		if (!std::getline(std::cin, input))
			if (std::cin.eof())
				errorExit("eof detected, closing phonebook.");
		if (std::cin.eof())
			errorExit("eof detected, closing phonebook.");
		if (input == "ADD")
			errorExit("todo1");
		else if (input == "SEARCH")
			errorExit("todo2");
		else
			messageWrongInput();
	}
	std::cout << "exiting" << std::endl;
}
