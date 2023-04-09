#include "Zombie.hpp"
#include <iostream>

int	main()
{
	int	n;

	{
		n = 3;
		Zombie	*zombies;
		zombies = zombieHorde(n, "1ぞんびーず");
		if (zombies)
		{
			for (int i = 0; i < n; i++)
				zombies[i].announce();
			delete[] zombies;
		}
		else
			std::cout << "1no zombies borned" << std::endl;
	}
	{
		n = 0;
		Zombie	*zombies;
		zombies = zombieHorde(n, "2ぞんびーず");
		if (zombies)
		{
			for (int i = 0; i < n; i++)
				zombies[i].announce();
			delete[] zombies;
		}
		else
			std::cout << "2no zombies borned" << std::endl;
	}
	{
		n = -1;
		Zombie	*zombies;
		zombies = zombieHorde(n, "3ぞんびーず");
		if (zombies)
		{
			for (int i = 0; i < n; i++)
				zombies[i].announce();
			delete[] zombies;
		}
		else
			std::cout << "3no zombies borned" << std::endl;
	}
}