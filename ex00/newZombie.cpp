#include "Zombie.hpp"

Zombie*	newZombie( std::string name )
{
	Zombie	*pointZ;
	
	pointZ = NULL;
	pointZ = new Zombie(name);
	return (pointZ);
};
