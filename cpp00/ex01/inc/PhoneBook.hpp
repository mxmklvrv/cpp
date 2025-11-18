#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

class PhoneBook
{
  private:
	Contact _contacts[8];

  public:
	PhoneBook();

	void addContact(size_t &i);
};

std::string processInput(std::string promt);

#endif