/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsimeono <vsimeono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 17:21:42 by vsimeono          #+#    #+#             */
/*   Updated: 2022/09/14 17:27:59 by vsimeono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.Class.hpp"

int	main()
{
	Zombie	*Z = newZombie("Linda");
	
	Z->announce();
	delete Z;

	randomChump("Hooker_and_Coke");
	return (0);
}
