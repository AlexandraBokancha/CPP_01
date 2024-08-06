#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <cstring>
#include <iostream>
#include <new> // new and delete operators;
#include "Zombie.h"

class	Zombie{
	
	private:
		std::string	_name;
	public :
		Zombie( std::string _name );
		void	announce( void );

	/* The destructor must print a message with 
	the name of the zombie for debugging purposes.*/
	~Zombie( void );

};

#endif