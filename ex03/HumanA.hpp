#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <string>
#include "Weapon.hpp"
// #define

class HumanA{
	public:
		HumanA(std::string name, Weapon &Weapon );
		~HumanA();
		void	setWeapon( Weapon &Weapon );
		Weapon	*getWeaponptr();
		void	attack( void );
	private:
		std::string	name;
		Weapon		&myWeapon;
};

#endif
