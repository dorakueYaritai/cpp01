#include "Zombie.hpp"

Zombie::Zombie(): name("default name") {
	std::cout << this->name << ": constructor  called" << std::endl;
}

Zombie::Zombie(std::string name): name(name) {
	// this->name = name;
	std::cout << this->name << ": constructor  called" << std::endl;
}

Zombie::~Zombie(){
	std::cout << this->name << ": destructor called" << std::endl;
}

void	Zombie::announce( void ){
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
