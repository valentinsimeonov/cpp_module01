/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsimeono <vsimeono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 19:49:16 by vsimeono          #+#    #+#             */
/*   Updated: 2022/09/15 20:02:31 by vsimeono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.Class.hpp"
#include "HumanB.Class.hpp"
#include "Weapon.Class.hpp"


int main()
{
	{
		Weapon club = Weapon("crude spiked club"); //This is the Same as < Weapon club("crude spiked club") >
		
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	{
		Weapon club = Weapon("crude spiked club"); //This is the Same as < Weapon club("crude spiked club") >
		
		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}
	return 0;
}
