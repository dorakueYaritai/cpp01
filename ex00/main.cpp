#include "Zombie.hpp"

int	main()
{
	{
		Zombie Zom_def;
	}
	Zombie	Zom_don("DON CHAN");
	{
		randomChump("poti");
		Zombie	*zom2 = newZombie("tama");
		delete(zom2);
		Zombie	*zom3 = newZombie("coron");
		delete(zom3);
	}
}

__attribute__((destructor)) static void destructor()
{
	system("leaks -q exe");
}
