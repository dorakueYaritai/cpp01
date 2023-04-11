#include "Herl.hpp"
#include <iostream>


Herl::~Herl()
{
}

Herl::Herl()
{
	this->complains[0] = &Herl::debug;
	this->complains[1] = &Herl::info;
	this->complains[2] = &Herl::warning;
	this->complains[3] = &Herl::error;
	
	this->levels[0] = "DEBUG";
	this->levels[1] = "INFO";
	this->levels[2] = "WARNING";
	this->levels[3] = "ERROR";
}

void	Herl::complain( std::string level ){
	size_t	i;

	i = 0;
	while (i < 4)
	{
		if (level == levels[i])
		{
			(this->*complains[i])();
			break;
		}
		i++;
	}
}

#define DBG_MSG "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!"
#define INFO_MSG "I cannot believe adding extra bacon costs more money. You didnt put enough bacon in my burger! If you did, I wouldnt be asking for more!"
#define WARN_MSG "I think I deserve to have some extra bacon for free. Ive been coming for years whereas you started working here since last month."
#define ERR_MSG "This is unacceptable! I want to speak to the manager now."
#define DEF_MSG "[ Probably complaining about insignificant problems ]"

void	Herl::debug( void ){
	std::cout << DBG_MSG << std::endl;
}

void	Herl::info( void ){
	std::cout << INFO_MSG << std::endl;
}

void	Herl::warning( void ){
	std::cout << WARN_MSG << std::endl;
}

void	Herl::error( void ){
	std::cout << ERR_MSG << std::endl;
}

void	Herl::filter( std::string complain ){
	int	i ;
	i = 0;
	while (i < NUM_FUNCTIONS)
	{
		if (complain == levels[i]) 
			break;
		i++;
	}
	switch (i)
	{
	case 0:
		debug();
	case 1:
		info();
	case 2:
		warning();
	case 3:
		error();
		break;
	default:
		std::cout << DEF_MSG << std::endl;
		break;
	}
}
