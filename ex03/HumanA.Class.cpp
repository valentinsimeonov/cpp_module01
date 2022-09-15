/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.Class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsimeono <vsimeono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 11:34:14 by vsimeono          #+#    #+#             */
/*   Updated: 2022/09/15 20:14:24 by vsimeono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.Class.hpp"

HumanA::HumanA(std::string name, Weapon &weapon): _a_name(name), _a_Weapon(weapon)
{
	//something
}

HumanA::~HumanA(void)
{
	//something
}

void	HumanA::attack(void)
{
	std::cout << _a_name << " attacks with their " << _a_Weapon.getType() << std::endl;
}
