#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>

class Contact
{
  private:
	std::string _firstName;
	std::string _lastName;
	std::string _nickName;
	std::string _phoneNumber;
	std::string _darkestSecret;

  public:
	Contact();

	// setters (assigning processed input to private value)
	void setFirstName(const std::string &firstName);
	void setLastName(const std::string &lastName);
	void setNickName(const std::string &nickName);
	void setPhoneNumber(const std::string &phoneNumber);
	void setDarkestSecret(const std::string &darkestSecret);

	// getters
	std::string getFirstName () const;
	std::string getLastName () const;
	std::string getNickName () const;
	std::string getPhoneNumber () const;
	std::string getDarkestSecret () const;

};

#endif