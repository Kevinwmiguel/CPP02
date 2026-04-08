/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwillian <kwillian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/08 19:29:21 by kwillian          #+#    #+#             */
/*   Updated: 2026/04/08 21:38:51 by kwillian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cctype>
#include <cmath>
#include <string>

class   Fixed
{
    private:
    int number;
    static const int intergerNumber = 8;

    public:

    Fixed();
    Fixed(const int nb);
    Fixed(const float nb);
    Fixed(const Fixed& other);
    float toFloat( void ) const;
    int toInt( void ) const;
    ~Fixed();
    
    Fixed operator+(const Fixed& other) const;
    Fixed operator-(const Fixed& other) const;
    Fixed operator*(const Fixed& other) const;
    Fixed operator/(const Fixed& other) const;
    
    bool operator>(const Fixed& other);
    bool operator<(const Fixed& other);
    bool operator<=(const Fixed& other);
    bool operator>=(const Fixed& other);
    bool operator==(const Fixed& other);
    bool operator!=(const Fixed& other);
    bool operator=(const Fixed& other);
    
    Fixed operator++(int);
    Fixed&operator++();
    Fixed operator--(int);
    Fixed&operator--();
    
    int getRawBits( void ) const;
    void setRawBits( int const raw );

    static Fixed& min(Fixed& a, Fixed& b);
    static const Fixed& min(const Fixed& a, const Fixed& b);
    static const Fixed& max(const Fixed& a, const Fixed& b);
    static Fixed& max(Fixed& a, Fixed& b);

};


std::ostream&operator<<(std::ostream& out, const Fixed& fixed);

// Default constructor
// • Copy constructor
// • Copy assignment operator
// • Destructor

#endif