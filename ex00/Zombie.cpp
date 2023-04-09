#include "Zombie.hpp"

Zombie::~Zombie(){
	std::cout << this->name << ": destroied" << std::endl;
}

Zombie* newZombie( std::string name ){
	Zombie	*instance =  new Zombie(name);
	return (instance);
}
