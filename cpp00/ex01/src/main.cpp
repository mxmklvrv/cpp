#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <iomanip>
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
	size_t		i;

	std::string input;
	i = 0;
	messageWelcome();
	while (input != "EXIT")
	{
		messagePromt();
		if (!std::getline(std::cin, input))
			if (std::cin.eof())
				errorExit("eof detected, closing phonebook.");
		if (std::cin.eof())
			errorExit("eof detected, closing phonebook.");
		if (input == "ADD")
			pbook.addContact(i);
		else if (input == "SEARCH")
			pbook.showAll();
	}
	std::cout << "exiting" << std::endl;
	return (0);
}

// when add is pressed we should
// take input, add all data
void PhoneBook::addContact(size_t &i)
{
	std::string input;
	_contacts[i].setFirstName(processInput("First name: "));
	_contacts[i].setLastName(processInput("Last name: "));
	_contacts[i].setNickName(processInput("Nick name: "));
	_contacts[i].setPhoneNumber(processInput("Phone number: "));
	_contacts[i].setDarkestSecret(processInput("Darkest secret: "));
	std::cout << "Contact added" << std::endl;
	i = (i + 1) % 3;
	if (_savedContacts != 3)
		_savedContacts++;
}

std::string processInput(std::string promt)
{
	std::string input;
	while (true)
	{
		std::cout << promt;
		if (!std::getline(std::cin, input))
			if (std::cin.eof())
				errorExit("eof detected, closing phonebook.");
		if (std::cin.eof())
			errorExit("eof detected, closing phonebook.");
		input.erase(0, input.find_first_not_of(" \t\n\r\f\v"));
		input.erase(input.find_last_not_of(" \t\n\r\f\v") + 1);
		if (input.empty())
			std::cout << "Input can not be empty, try again" << std::endl;
		else if (input == "EXIT")
		{
			std::cout << "Closing phonebook" << std::endl;
			exit(0);
		}
		else
			return (input);
	}
}

void PhoneBook::showAll(void)
{
	if (_savedContacts == 0)
	{
		std::cout << "Phonebook is empty, add something to it" << std::endl;
		return ;
	}
	std::cout << std::setw(10) << "index" << " | ";
	std::cout << std::setw(10) << "first name" << " | ";
	std::cout << std::setw(10) << "last name" << " | ";
	std::cout << std::setw(10) << "nick name" << " | " << std::endl;
	std::cout << std::string(51, '+') << std::endl;
	for (size_t i = 0; i < _savedContacts; i++)
	{
		std::cout << std::setw(10) << (i + 1) << " | ";
		std::cout << std::setw(10) << formatInput(_contacts[i].getFirstName()) << " | ";
		std::cout << std::setw(10) << formatInput(_contacts[i].getLastName()) << " | ";
		std::cout << std::setw(10) << formatInput(_contacts[i].getNickName()) << " | ";
		std::cout << std::endl;
	}
	std::cout << std::endl;
}

std::string PhoneBook::formatInput(std::string data)
{
	if(data.length() > 10)
		data = data.substr(0, 9) + ".";
	return (data);
}