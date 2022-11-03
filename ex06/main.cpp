/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nartex <nartex@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 14:46:08 by nartex            #+#    #+#             */
/*   Updated: 2022/11/03 14:46:34 by nartex           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "harl.hpp"

int		main(int argc, char **argv)
{
	Harl Harl;

	if (argc == 1)
	{
		std::cout << "Please type an argument" << std::endl;
	}
	Harl.complain(argv[1]);
}