#pragma once

class Fixed
{
private:
	int _value;
	static const int _fractionalBits = 8;
public:
	// default constructor
	Fixed();
	// default distructor
	~Fixed();
	// copy constructor - creates a copy of an existing objet
	Fixed(const Fixed& other);
	// copy assignment operator
	Fixed& operator=(const Fixed& other);

	int getRawBits(void) const;
	void setRawBits(int const raw);

};

