/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.Class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsimeono <vsimeono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 17:44:57 by vsimeono          #+#    #+#             */
/*   Updated: 2022/09/14 20:09:32 by vsimeono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.Class.hpp"

/* Declaring in Canonical Form, and "_name(name)" is an Initialization List
   which means that the Varible _name will Store what is Inside name */  
Zombie::Zombie(void)
{
	// So the Compiler Does Not Complain
	_name = "Something";
}

Zombie::~Zombie(void)
{
	// So the Compiler Does Not Complain
}

void	Zombie::announce(std::string name)
{
	std::cout << name << "Brainz" << std::endl;
}

void	Zombie::create_name(std::string input)
{
	_name = input;
}
