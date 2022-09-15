/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.Class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsimeono <vsimeono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 11:45:46 by vsimeono          #+#    #+#             */
/*   Updated: 2022/09/15 20:07:44 by vsimeono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_CLASS_HPP
#define HUMANB_CLASS_HPP

#include <iostream>
#include <string>
#include "Weapon.Class.hpp"

class HumanB
{
	private:
		Weapon 			*_b_Weapon;
		std::string		_b_name;
	public:
		HumanB(std::string name);
		~HumanB(void);
		void	setWeapon(Weapon &weapon);
		void	attack(void);

};

#endif