/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.Class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsimeono <vsimeono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 11:48:49 by vsimeono          #+#    #+#             */
/*   Updated: 2022/09/15 20:15:56 by vsimeono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_CLASS_HPP
#define WEAPON_CLASS_HPP

#include <iostream>
#include <string>

class Weapon
{
	private:
		std::string	_type;
		
	public:
		Weapon(std::string type);
		~Weapon(void);
		const std::string& getType(void);
		void	setType(std::string new_type); 
};

#endif