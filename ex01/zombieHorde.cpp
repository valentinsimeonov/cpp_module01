/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsimeono <vsimeono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 18:03:57 by vsimeono          #+#    #+#             */
/*   Updated: 2022/09/14 18:13:00 by vsimeono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.Class.hpp"

Zombie *zombieHorde(int N, std::string name)
{
	int		i;
	Zombie 	*horde;

	horde = new Zombie[N];
	i = 0;

	while (i < N)
	{
		horde[i].create_name(name);
		i++;
	}
	return (name);
}
