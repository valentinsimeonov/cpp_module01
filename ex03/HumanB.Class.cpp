/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.Class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsimeono <vsimeono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 11:45:12 by vsimeono          #+#    #+#             */
/*   Updated: 2022/09/15 20:12:30 by vsimeono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.Class.hpp"

HumanB::HumanB(std::string name) : _b_name(name)
{
	_b_Weapon = NULL;
}

HumanB::~HumanB(void)
{
	//something
}

void	HumanB::attack(void)
{
	if (_b_Weapon != NULL)
		std::cout << _b_name << " attacks with their " << (*_b_Weapon).getType() << std::endl;
	else
		std::cout << _b_name << " attacks with their Thumb as weapons are Not Available " << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	_b_Weapon = &weapon;
}

