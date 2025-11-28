#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <iomanip>

PhoneBook::PhoneBook()
{
	_savedContacts = 0;
}

void PhoneBook::addContact(int &i)
{
	std::string input;

	std::cout << std::endl;
	_contacts[i].setFirstName(processInput("First name: "));
	_contacts[i].setLastName(processInput("Last name: "));
	_contacts[i].setNickName(processInput("Nick name: "));
	_contacts[i].setPhoneNumber(processInput("Phone number: "));
	_contacts[i].setDarkestSecret(processInput("Darkest secret: "));
	std::cout << std::endl;
	std::cout << "Contact added!" << std::endl << std::endl;

	i = (i + 1) % 8;
	if (_savedContacts != 8)
		_savedContacts++;
}

void PhoneBook::searchContact(void)
{
	if (_savedContacts == 0)
	{
		std::cout << "Phonebook is empty, add something to it." << std::endl<< std::endl;
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