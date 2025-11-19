#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

class PhoneBook
{
  private:
	Contact _contacts[3];
	size_t _savedContacts;

  public:
	PhoneBook();

	void addContact(size_t &i);
	void showAll();
	std::string formatInput(std::string data);
};

std::string processInput(std::string promt);

#endif