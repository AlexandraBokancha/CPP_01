#include "Zombie.hpp"

Zombie::Zombie( std::string name ){
	this->_name = name;
};

void	Zombie::announce( void ){
	std::cout << this->_name << ": " << "BraiiiiiiinnnzzzZ..." << std::endl;
};

Zombie::~Zombie( void ){
	std::cout << this->_name << ": has been destroyed" << std::endl;
};
