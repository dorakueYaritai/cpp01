#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <string>
#include "Weapon.hpp"

class HumanA{
	public:
		void	attack( void );
	private:
		std::string	name;
		Weapon		Weapon;
};

#endif
