#include "Zombie.Class.hpp"


int	main()
{
	Zombie	*Z = newZombie("Linda");

	Z->announce();
	delete Z;

	randomChump("Hooker");
	return (0);
}