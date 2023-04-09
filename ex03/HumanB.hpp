#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <string>
#include "Weapon.hpp"

class HumanB{
	public:
		void	attack( void );
	private:
		std::string	name;
		Weapon		Weapon;
};

#endif
