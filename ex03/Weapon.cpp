#include "Weapon.hpp"

Weapon::Weapon(): type("よわい銃"){
	std::cout << BLUE << this->type << WHITE << ":weapon constractor called" << std::endl;
}

Weapon::Weapon(Weapon &weapon): type(weapon.getType()){
	std::cout << BLUE << this->type << WHITE << ":weapfaddfsaon constractor called" << std::endl;
}

Weapon::Weapon(std::string type): type(type) {
	std::cout << BLUE << this->type << WHITE << ":weapon constractor called" << std::endl;
}

Weapon::~Weapon() {
	std::cout << BLUE << this->type << WHITE << ":weapon destractor called" << std::endl;
}

std::string	Weapon::getType( void ){
	return this->type;
}

void		Weapon::setType( std::string type ){
	this->type = type;
}
