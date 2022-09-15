/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.Class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsimeono <vsimeono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 11:36:51 by vsimeono          #+#    #+#             */
/*   Updated: 2022/09/15 20:14:22 by vsimeono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_CLASS_HPP
#define HUMANA_CLASS_HPP

#include <iostream>
#include <string>
#include "Weapon.Class.hpp"

class HumanA
{
	private:
		std::string		_a_name;
		Weapon			&_a_Weapon;

	public:
		HumanA(std::string _a_name, Weapon &_a_Weapon);
		~HumanA(void);
		void	attack(void);
};

#endif