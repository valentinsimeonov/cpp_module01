/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsimeono <vsimeono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 20:20:41 by vsimeono          #+#    #+#             */
/*   Updated: 2022/09/14 21:22:50 by vsimeono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int		main()
{
	std::string		slim_shady;
	std::string		*stringPTR;
	std::string		&stringREF = slim_shady;
	
	slim_shady = "HI THIS IS BRAIN";
	stringPTR = &slim_shady;

	std::cout << "The memory address of the string variable: " << stringPTR << std::endl;
	std::cout << "The memory address held by stringPTR: " << stringPTR << std::endl;
	std::cout << "The memory address held by stringREF: " << &stringREF << std::endl;
	std::cout << "Second Printing Part" << std::endl;
	std::cout << "The value of the string variable: " << slim_shady << std::endl;
	std::cout << "The value pointed to by stringPTR: " << slim_shady << std::endl;
	std::cout << "The value pointed to by stringREF: " << slim_shady << std::endl;
}
