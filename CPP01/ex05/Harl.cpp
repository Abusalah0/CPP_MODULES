/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdsalah <abdsalah@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 04:24:57 by abdsalah          #+#    #+#             */
/*   Updated: 2025/03/27 04:35:37 by abdsalah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::complain( std::string level )
{

    typedef void (Harl::*func)( void );
    func functions[] = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error };
    std::string levels[] = { "DEBUG", "INFO", "WARNING", "ERROR" };
    
    for (int i = 0; i < 4; i++)
    {
        if (levels[i] == level)
        {
            (this->*functions[i])();
            return ;
        }
    }
    std::cout << "Invalid Level" << std::endl;
}

void Harl::debug( void )
{
    std::cout << "DEBUG" << std::endl;
}

void Harl::info( void )
{
    std::cout << "INFO" << std::endl;
}

void Harl::warning( void )
{
    std::cout << "WARNING" << std::endl;
}

void Harl::error( void )
{
    std::cout << "ERROR" << std::endl;
}
