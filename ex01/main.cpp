/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsimeono <vsimeono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 18:09:04 by vsimeono          #+#    #+#             */
/*   Updated: 2022/09/14 20:11:53 by vsimeono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.Class.hpp"

int		main()
{
	int		i;
	int		N;
	Zombie 	*horde;

	i = 0;
	N = 11;
	horde = zombieHorde(N, "Leak");
	
	while(i < N)
	{
		horde[i].announce("Zombilica");
		i++;
	}
	delete[] horde;
	return (0);
}
