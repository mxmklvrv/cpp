#pragma once
#include <iostream>

class Fixed
{
  private:
	int _value;
	static const int _fractionalBits = 8;

  public:
	Fixed();
	Fixed(const int iNum);
	Fixed(const float fNum);
	~Fixed();
	Fixed(const Fixed &other);
	Fixed &operator=(const Fixed &other);

	Fixed operator+(const Fixed &other) const;
	Fixed operator-(const Fixed &other) const;
	Fixed operator*(const Fixed &other) const;
	Fixed operator/(const Fixed &other) const;

	bool operator>(const Fixed &other) const;
	bool operator<(const Fixed &other) const;
	bool operator>=(const Fixed &other) const;
	bool operator<=(const Fixed &other) const;
	bool operator==(const Fixed &other) const;
	bool operator!=(const Fixed &other) const;
	

	int getRawBits(void) const;
	void setRawBits(int const raw);

	float toFloat(void) const;
	int toInt(void) const;
};

std::ostream &operator<<(std::ostream &out, const Fixed &value);