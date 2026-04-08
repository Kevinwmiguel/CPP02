/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwillian <kwillian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/23 21:49:48 by kwillian          #+#    #+#             */
/*   Updated: 2026/04/08 15:19:11 by kwillian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cctype>
#include <string>

class   Fixed
{
    private:
    int number;
    static const int intergerNumber = 8;

    public:

    Fixed();
    ~Fixed();
    Fixed&operator=(const Fixed& other);
    Fixed(const Fixed& other);
    int getRawBits( void ) const;
    void setRawBits( int const raw );
};

// Default constructor
// • Copy constructor
// • Copy assignment operator
// • Destructor

#endif