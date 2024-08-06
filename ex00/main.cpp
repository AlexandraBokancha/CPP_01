#include "Zombie.hpp"

int	main(void)
{

	Zombie myZombie("stack");

	myZombie.announce();
	
	Zombie *pointZombie;
	
	pointZombie = newZombie("heap");
	pointZombie->announce();
	delete pointZombie;
	return (0);
};