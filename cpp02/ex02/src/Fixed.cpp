#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed():_value(0){
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const int iNum){
	std::cout << "Int constructor called" << std::endl;
	_value = iNum << _fractionalBits;
	std::cout << "Saved number is: " << this->_value << std::endl;
}

Fixed::Fixed(const float fNum){
	std::cout << "Float constructor called"  << std::endl;
	_value = roundf(fNum * (1 << _fractionalBits));
}


Fixed::Fixed(const Fixed& other) : _value(other.getRawBits()){
	std::cout << "Copy constructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& other){
	if (this != &other)
		_value = other.getRawBits();
	return (*this);
}


int Fixed::getRawBits(void) const{
	std::cout << "getRawBits member function called" << std::endl;
	return (_value);
}

void Fixed::setRawBits(int const raw){
	std::cout << "setRawBits member function called" << std::endl;
	_value = raw;
}

int Fixed::toInt(void) const{
	return _value >> _fractionalBits;
}

float Fixed::toFloat(void) const{
	return static_cast<float>(_value) / (1 << _fractionalBits); 
}

std::ostream& operator<<(std::ostream& out, const Fixed& value){
	out << value.toFloat();
	return out;
}