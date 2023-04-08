#include "Zombie.hpp"

int	main(){
	std::string name;

	name = "tarou";
	Zombie	Zombie1(name);
	name = "tarou2";
	Zombie	*zom2 = newZombie(name);
	delete(zom2);
	// Zombie1.newZombie(name);

}