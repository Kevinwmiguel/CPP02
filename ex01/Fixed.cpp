/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwillian <kwillian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/08 19:29:16 by kwillian          #+#    #+#             */
/*   Updated: 2026/04/08 20:38:24 by kwillian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : number (0)
{
    std::cout << "Constructor Called" << std::endl;
}

Fixed::~Fixed()
{
    std::cout << "Destructor Called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other) {
        this->number = other.number;
    }
    return *this;
}

std::ostream& operator<<(std::ostream& out, const Fixed& fixed)
{
    out << fixed.toFloat();
    return out;
}

Fixed::Fixed(const int nb)
{
    std::cout << "Int constructor called" << std::endl;
    this->number = nb << intergerNumber;
}

Fixed::Fixed(const float nb)
{
    std::cout << "Float constructor called" << std::endl;
    this->number = roundf(nb * (1 << intergerNumber));
}

float Fixed::toFloat( void ) const
{
    std::cout << "Constructor Called" << std::endl;
    return (float)this->number / (1 << intergerNumber);
}

int Fixed::toInt( void ) const
{
    return this->number >> intergerNumber;
}

Fixed::Fixed(const Fixed& other)
{
    number = other.number;
}

int Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member function called" << std::endl;
    int raw = this->number;
    return raw;   
}

void Fixed::setRawBits( int const raw )
{
    std::cout << "setRawBits member function called" << std::endl;
    this->number = raw;
}