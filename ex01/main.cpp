/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsimeono <vsimeono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 18:09:04 by vsimeono          #+#    #+#             */
/*   Updated: 2022/09/14 18:13:33 by vsimeono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.Class.hpp"

int		main()
{
	int		N;
	Zombie 	*horde;
	
	N = 11;
	horde = zombieHorde(N, "Leak");
	
	while(i < N)
	{
		horde[i].announce();
		i++;
	}
	delete[] horde;
	return (0);
}
