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