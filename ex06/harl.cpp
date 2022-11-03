/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nartex <nartex@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 14:46:03 by nartex            #+#    #+#             */
/*   Updated: 2022/11/03 14:46:04 by nartex           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

		
#include "harl.hpp"

Harl::Harl() {

}

Harl::~Harl() {

}

void	Harl::debug( void ) {
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special ketchup burger. I really do!" << std::endl;
}

void	Harl::info( void ) {
	std::cout << "I cannot believe adding extra bacon costs more money. " << 
	" You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more! " << std::endl;
}

void	Harl::warning( void ) {
	std::cout << "I think I deserve to have some extra bacon for free. " <<
	" I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error( void )
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::complain(std::string level)
{
	std::string message[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int		typed;
	typed = -1;

	for (int i = 0; i <= 3; i++)
	{
		if (message[i] == level)
		{
			typed = i;
		}
	}

	switch (typed)
	{
		case 0:
			Harl::debug();
			__attribute__((fallthrough));
		case 1:
			Harl::info();
			__attribute__ ((fallthrough));
		case 2:
			Harl::warning();
			__attribute__ ((fallthrough));
		case 3:
			Harl::error();
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]\n" << std::endl;
		break;
	}


}