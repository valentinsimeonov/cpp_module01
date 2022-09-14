/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.Class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsimeono <vsimeono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 17:44:19 by vsimeono          #+#    #+#             */
/*   Updated: 2022/09/14 19:31:43 by vsimeono         ###   ########.fr       */
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
		Zombie(void);
		~Zombie(void);
		void	announce(std::string name);
		void	create_name(std::string input);
};
		Zombie* zombieHorde(int N, std::string name);
		Zombie*	newZombie(std::string name);

#endif
