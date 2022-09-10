#include "Zombie.Class.hpp"

/* "new" Allocates Memory for the Variable "name"
   which is Inside the "Zombie" Class */
Zombie	*newZombie(std::string name)
{
	return (new Zombie(name));
}
