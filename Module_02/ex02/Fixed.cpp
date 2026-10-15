#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed() :_rawBits(0) 
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int value)
{
	std::cout << "Int constructor called" << std::endl;
	this->_rawBits = value * (1 << _fractionalBits);
}

Fixed::Fixed(const float value)
{
	std::cout << "Float constructor called" << std::endl;
	this->_rawBits = static_cast<int> (roundf(value * (1 << _fractionalBits)));
}

Fixed::Fixed(const Fixed &other)
{
	std::cout << "Copy Constructor called" << std::endl;
	*this = other;
}

Fixed &Fixed::operator=(const Fixed &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	
	if (this != &other)
		_rawBits = other._rawBits;
	
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	
	return (this->_rawBits);
}

void Fixed::setRawBits(int const raw)
{
	_rawBits = raw;
}

float Fixed::toFloat(void) const
{
	return static_cast<float>(_rawBits) / (1 << _fractionalBits);
}

int Fixed::toInt(void) const
{
	return _rawBits / (1 << _fractionalBits);
}

std::ostream &operator<<(std::ostream &out, const Fixed &value)
{
	out << value.toFloat();
	return (out);
}

bool Fixed::operator>(const Fixed &other) const
{
	if (_rawBits > other._rawBits)
		return true;
	return false;
}

bool Fixed::operator<(const Fixed &other) const
{
	if (_rawBits < other._rawBits)
		return true;
	return false;
}

bool Fixed::operator>=(const Fixed &other) const
{
	if (_rawBits >= other._rawBits)
		return true;
	return false;
}

bool Fixed::operator<=(const Fixed &other) const
{
	if (_rawBits <= other._rawBits)
		return true;
	return false;
}

bool Fixed::operator==(const Fixed &other) const
{
	if (_rawBits == other._rawBits)
		return true;
	return false;
}

bool Fixed::operator!=(const Fixed &other) const
{
	if (_rawBits != other._rawBits)
		return true;
	return false;
}

Fixed Fixed::operator+(const Fixed &other) const
{
    Fixed result;

    double rawA = static_cast<double>(_rawBits);
    double rawB = static_cast<double>(other._rawBits);
    double sum = rawA + rawB;

    result.setRawBits(static_cast<int>(sum));
    return result;
}

Fixed Fixed::operator-(const Fixed &other) const
{
    Fixed result;

    double rawA = static_cast<double>(_rawBits);
    double rawB = static_cast<double>(other._rawBits);
    double difference = rawA - rawB;

    result.setRawBits(static_cast<int>(difference));
    return result;
}

Fixed Fixed::operator*(const Fixed &other) const
{
    Fixed result;

    double rawA = static_cast<double>(_rawBits);
    double rawB = static_cast<double>(other._rawBits);
    double scale = 1 << _fractionalBits;

    double product = rawA * rawB;
    double scaledResult = product / scale;

    result.setRawBits(static_cast<int>(scaledResult));
    return result;
}

Fixed Fixed::operator/(const Fixed &other) const
{
    Fixed result;

    double rawA = static_cast<double>(_rawBits);
    double rawB = static_cast<double>(other._rawBits);
    double scale = 1 << _fractionalBits;

    double numerator = rawA * scale;
    double quotient = numerator / rawB;

    result.setRawBits(static_cast<int>(quotient));
    return result;
}

Fixed &Fixed::operator++()
{
	++_rawBits;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed temp(*this);
	
	_rawBits++;
	return (temp);
}

Fixed &Fixed::operator--()
{
	--_rawBits;
	return *this;
}

Fixed Fixed::operator--(int)
{
	Fixed temp(*this);

	--_rawBits;
	return temp;
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	if (a < b)
		return a;
	return b;
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a < b)
		return a;
	return b;
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	if (a > b)
		return a;
	return b;
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a > b)
		return a;
	return b;
}