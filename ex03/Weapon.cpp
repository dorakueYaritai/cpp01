#include "Weapon.hpp"

Weapon::Weapon(): type("よわい銃"){
	std::cout << BLUE << this->type << WHITE << ":weapon1 constractor called" << std::endl;
}

// Weapon::Weapon(Weapon &weapon): type(weapon.getType()){
// 	std::cout << BLUE << this->type << WHITE << ":weapon2 constractor called" << std::endl;
// }

Weapon::Weapon(Weapon &weapon, std::string type): type(weapon.getType()){
	std::cout << BLUE << this->type << type << WHITE << ":weapon4 constractor called" << std::endl;
}

Weapon::Weapon(std::string type): type(type) {
	std::cout << BLUE << this->type << WHITE << ":weapon3 constractor called" << std::endl;
}

Weapon::~Weapon() {
	std::cout << BLUE << this->type << WHITE << ":weapon destractor called" << std::endl;
}

std::string	Weapon::getType( void ){
	return this->type;
}

void		Weapon::setType( std::string type ){
	std::cout << BLUE << this->type << WHITE << ":weapon from to " << BLUE << type << WHITE << std::endl;
	this->type = type;
}
