#include "HumanA.hpp"

// HumanA::HumanA(std::string name, Weapon &Weapon ): name(name), myWeapon(Weapon){
// 	std::cout << " HumanA constractor called " << RED << this->name << WHITE << std::endl;
// }

// HumanA::~HumanA(){
// 	std::cout << " HumanA destractor called " << RED << this->name << WHITE << std::endl;
// }

// void	HumanA::attack(){
// 	std::cout << RED << this->name << WHITE << " attacks with their " << BLUE << this->myWeapon.getType() << WHITE << std::endl;
// }

// void	HumanA::setWeapon( Weapon &Weapon ){
// 	this->myWeapon = Weapon;
// } 

HumanA::HumanA(std::string name, Weapon &Weapon ): name(name), myWeapon(Weapon.getType()){
	std::cout << " HumanA constractor called " << RED << this->name << WHITE << std::endl;
}

HumanA::~HumanA(){
	std::cout << " HumanA destractor called " << RED << this->name << WHITE << std::endl;
}

void	HumanA::attack(){
	std::cout << RED << this->name << WHITE << " attacks with their " << BLUE << this->myWeapon.getType() << WHITE << std::endl;
}

void	HumanA::setWeapon( Weapon &Weapon ){
	this->myWeapon = Weapon;
} 

