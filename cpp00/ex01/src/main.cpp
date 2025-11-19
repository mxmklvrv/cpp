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
	int			i;

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
void PhoneBook::addContact(int &i)
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
	for (int i = 0; i < _savedContacts; i++)
	{
		std::cout << std::setw(10) << (i + 1) << " | ";
		std::cout << std::setw(10) << formatInput(_contacts[i].getFirstName()) << " | ";
		std::cout << std::setw(10) << formatInput(_contacts[i].getLastName()) << " | ";
		std::cout << std::setw(10) << formatInput(_contacts[i].getNickName()) << " | ";
		std::cout << std::endl;
	}
	std::cout << std::endl;
	std::string input;
	while (true)
	{
		std::cout << "enter index between (1 - " << _savedContacts << "): ";
		input = processInput("");
		if (input.size() != 1 || input[0] < '1' || input[0] > ('0' + _savedContacts))
			continue ;
		int id = input[0] - '1';
		std::cout << std::endl;
		std::cout << "First name: " <<_contacts[id].getFirstName() << std::endl;
		std::cout << "Last name: " <<_contacts[id].getLastName() << std::endl;
		std::cout << "Phone number: " <<_contacts[id].getPhoneNumber() << std::endl;
		std::cout << "Nick name: " <<_contacts[id].getNickName() << std::endl;
		std::cout << "Darkest secret: " <<_contacts[id].getDarkestSecret() << std::endl;
		std::cout << std::endl;
		break ;
	}
}

std::string PhoneBook::formatInput(std::string data)
{
	if (data.length() > 10)
		data = data.substr(0, 9) + ".";
	return (data);
}