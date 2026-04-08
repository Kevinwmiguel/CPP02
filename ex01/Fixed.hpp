/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwillian <kwillian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/08 19:29:21 by kwillian          #+#    #+#             */
/*   Updated: 2026/04/08 20:27:49 by kwillian         ###   ########.fr       */
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
    float toFloat( void ) const;
    int toInt( void ) const;
    ~Fixed();
    Fixed&operator=(const Fixed& other);
    Fixed(const Fixed& other);
    int getRawBits( void ) const;
    void setRawBits( int const raw );
};

std::ostream&operator<<(std::ostream& out, const Fixed& fixed);

// Default constructor
// • Copy constructor
// • Copy assignment operator
// • Destructor

#endif