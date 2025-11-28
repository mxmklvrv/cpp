#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <iostream>

void	messageWelcome(void)
{
	std::cout << "Welcome to the Phonebook app." << std::endl;
	std::cout << std::endl;
	std::cout << "Type ADD command if you want to save a new contact." << std::endl;
	std::cout << "Type SEARCH command if you want to display a specific contact." << std::endl;
	std::cout << "Type EXIT to close phonebook." << std::endl;
	std::cout << std::endl;
}

void	messagePromt(void)
{
	std::cout << "Type ADD or SEARCH or EXIT: ";
}
void	errorExit(std::string message)
{
	std::cout << std::endl << message << std::endl;
	exit(1);
}

int	main(void)
{
	PhoneBook	pbook;
	int			i;

	std::string input;
	i = 0;
	messageWelcome();
	while (input != "EXIT")
	{
		messagePromt();
		if (!std::getline(std::cin, input))
			if (std::cin.eof())
				errorExit("EOF detected, closing phonebook.");
		if (input == "ADD")
			pbook.addContact(i);
		else if (input == "SEARCH")
			pbook.searchContact();
	}
	std::cout << "Closing phonebook." << std::endl;
	return (0);
}

std::string processInput(std::string promt)
{
	std::string input;
	while (true)
	{
		std::cout << promt;
		if (!std::getline(std::cin, input))
			if (std::cin.eof())
				errorExit("EOF detected, closing phonebook.");
		input.erase(0, input.find_first_not_of(" \t\n\r\f\v"));
		input.erase(input.find_last_not_of(" \t\n\r\f\v") + 1);
		if (input.empty())
			std::cout << "Input can not be empty, try again." << std::endl;
		else if (input == "EXIT")
		{
			std::cout << "Closing phonebook." << std::endl;
			exit(0);
		}
		else
			return (input);
	}
}
