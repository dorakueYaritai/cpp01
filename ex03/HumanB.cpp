#include "HumanB.hpp"

HumanB::HumanB(std::string name): name(name){
	std::cout << " HumanB constractor called " << RED << this->name << WHITE << std::endl;
}

HumanB::~HumanB(){
	std::cout << " HumanA destractor called " << RED << this->name << WHITE << std::endl;
}

HumanB::HumanB(std::string name, Weapon Weapon ): name(name), myWeapon(Weapon){
	std::cout << " HumanB constractor called " << RED << this->name << WHITE << std::endl;
}

void	HumanB::attack(){
	std::cout << RED << this->name << WHITE << " attacks with their " << BLUE << this->myWeapon.getType() << WHITE << std::endl;
}

void	HumanB::setWeapon( Weapon Weapon ){
	this->myWeapon = Weapon;
}
