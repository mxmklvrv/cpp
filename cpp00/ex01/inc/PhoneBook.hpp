#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

class PhoneBook
{
  private:
	Contact _contacts[8];
	int _savedContacts;

  public:
	PhoneBook();

	void addContact(int &i);
	void searchContact(void);
	std::string formatInput(std::string data);
};

std::string processInput(std::string promt);

#endif