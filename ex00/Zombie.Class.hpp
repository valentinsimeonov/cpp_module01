/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.Class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsimeono <vsimeono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 17:21:51 by vsimeono          #+#    #+#             */
/*   Updated: 2022/09/14 18:17:17 by vsimeono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_CLASS_HPP
#define ZOMBIE_CLASS_HPP

#include <iostream>

class Zombie
{
	private:
		std::string	_name;
	
	public:
		Zombie(std::string name) : _name(name) {};
		~Zombie(void);
		void	announce(void);
		
};

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);

#endif