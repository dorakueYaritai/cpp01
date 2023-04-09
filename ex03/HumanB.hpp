#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <string>
#include "Weapon.hpp"

class HumanB{
	public:
		HumanB(std::string name);
		HumanB(std::string name, Weapon Weapon );
		~HumanB();
		void	setWeapon( Weapon Weapon );
		void	attack( void );
	private:
		std::string	name;
		Weapon		myWeapon;
};

#endif
