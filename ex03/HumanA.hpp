#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <string>
#include "Weapon.hpp"

class HumanA{
	public:
		HumanA(std::string name, Weapon &Weapon );
		~HumanA();
		void	setWeapon( Weapon &Weapon );
		void	attack( void );
	private:
		std::string	name;
		Weapon		myWeapon;
		// Weapon		&myWeapon;
};

#endif
