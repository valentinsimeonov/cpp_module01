#include "Zombie.Class.hpp"

// Zombie::Zombie(void)
// {
// 	// So the Compiler Does Not Complain
// }

Zombie::~Zombie(void)
{
	// So the Compiler Does Not Complain
}

void	Zombie::announce(void)
{
	// newZombie(this->name);
	std::cout << " Zombie " << this->_name << " BraiiiiiiinnnzzzZ..." << std::endl;
}



// Zombie	*newZombie(std::string name)
// {
// 	// std::string	zombie;
// 	int		i;

// 	name = "zombie1";
// 	while (1)
// 	{
// 		name[6] = i;
// 		i++; 
// 	}
// 	return (name);
// }
