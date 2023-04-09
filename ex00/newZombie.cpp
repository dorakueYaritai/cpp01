#include "Zombie.hpp"

Zombie::Zombie(std::string name){
	this->name = name;
	this->announce();
}


void	Zombie::announce( void ){
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

