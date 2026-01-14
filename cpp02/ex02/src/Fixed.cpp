#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed():_value(0){}

Fixed::~Fixed(){}

Fixed::Fixed(const int iNum){
	_value = iNum << _fractionalBits;
	std::cout << "Saved num is: "<< _value << std::endl; 
}

Fixed::Fixed(const float fNum){
	_value = roundf(fNum * (1 << _fractionalBits));
}

Fixed::Fixed(const Fixed& other) : _value(other.getRawBits()){}

Fixed& Fixed::operator=(const Fixed& other){
	if (this != &other)
		_value = other.getRawBits();
	return *this;
}

int Fixed::getRawBits(void) const{
	return _value;
}

void Fixed::setRawBits(int const raw){
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

Fixed Fixed::operator+(const Fixed& other) const{
	Fixed res;
	res.setRawBits(this->_value + other._value);
	return res;
}

Fixed Fixed::operator-(const Fixed& other) const{
	Fixed res;
	res.setRawBits(this->_value - other._value);
	return res;
}

Fixed Fixed::operator*(const Fixed& other) const{
	Fixed res;
	long temp;
	temp = static_cast<long>(this->_value) * static_cast<long>(other._value);
	res.setRawBits(temp >> _fractionalBits);
	return res;
}

Fixed Fixed::operator/(const Fixed& other) const{
	if(other._value == 0){
		std::cout << "impossible to divide by zero" << std::endl;
		return Fixed(0);
	} 
	Fixed res;
	long temp;
	long shift = (static_cast<long>(this->_value)) << _fractionalBits;
	temp = shift / other._value;
	res.setRawBits(static_cast<int>(temp));
	return res;
} 

bool Fixed::operator>(const Fixed &other) const{
	return this->_value > other._value;
}

bool Fixed::operator<(const Fixed &other) const{
	return this->_value < other._value;
}

bool Fixed::operator>=(const Fixed &other) const{
	return this->_value >= other._value;
}

bool Fixed::operator<=(const Fixed &other) const{
	return this->_value <= other._value;
}

bool Fixed::operator==(const Fixed &other) const{
	return this->_value == other._value;
}

bool Fixed::operator!=(const Fixed &other) const{
	return this->_value != other._value;
}

// pre-inc
Fixed& Fixed::operator++(void){
	this->_value++;
	return *this;
}

// post-inc
Fixed Fixed::operator++(int){
	Fixed old;
	old = *this;
	++(*this);
	return old;
}


Fixed& Fixed::operator--(void){
	this->_value--;
	return *this;
}


Fixed Fixed::operator--(int){
	Fixed old;
	old = *this;
	--(*this);
	return old;
}

Fixed& Fixed::min(Fixed& a, Fixed& b){
	return a._value < b._value ? a : b; 
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b){
	return a._value < b._value ? a : b;
}

Fixed& Fixed::max(Fixed& a, Fixed& b){
	return a._value > b._value ? a : b;
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b){
	return a._value > b._value ? a : b;
}
