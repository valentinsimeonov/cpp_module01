/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.Class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsimeono <vsimeono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 12:23:56 by vsimeono          #+#    #+#             */
/*   Updated: 2022/09/15 18:35:50 by vsimeono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.Class.hpp"

Weapon::Weapon(std::string type) : _type(type)
{
	//something
}

Weapon::~Weapon(void)
{
	//something
}

const std::string& Weapon::getType(void)
{
	return (_type);
}

void	Weapon::setType(std::string new_type)
{
	_type = new_type;
}
