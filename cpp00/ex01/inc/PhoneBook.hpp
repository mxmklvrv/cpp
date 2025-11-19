#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

class PhoneBook
{
  private:
	Contact _contacts[3];
	int _savedContacts;

  public:
	PhoneBook();

	void addContact(int &i);
	void showAll();
	std::string formatInput(std::string data);
};

std::string processInput(std::string promt);

#endif