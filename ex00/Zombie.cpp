#include "Zombie.hpp"

Zombie::Zombie( std::string _name ){
	this->_name = _name;
	return ;
}

void	Zombie::announce( void )
{
	std::cout << "New zombie created" << std::endl;
	std::cout << _name << ": " << "BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
};

Zombie::~Zombie( void )
{
	return ;
}