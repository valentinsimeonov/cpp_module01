/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsimeono <vsimeono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 17:21:48 by vsimeono          #+#    #+#             */
/*   Updated: 2022/09/14 17:27:51 by vsimeono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.Class.hpp"

/* "new" Allocates Memory for the Variable "name"
   which is Inside the "Zombie" Class */
Zombie	*newZombie(std::string name)
{
	return (new Zombie(name));
}
