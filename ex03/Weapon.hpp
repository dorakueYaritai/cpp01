#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>
#include <iostream>

class Weapon{
	public:
		Weapon();
		// Weapon(Weapon &weapon);
		Weapon(std::string type);
		Weapon(Weapon &weapon, std::string type);
		~Weapon();
		std::string	getType( void );
		void		setType( std::string type );
	private:
		std::string	type;
};

#define BLACK "\x1b[30m"
#define WHITE "\x1b[37m"
#define RED "\x1b[31m"
#define BLUE "\x1b[34m"
#define GLEEN "\x1b[32m"

#endif
