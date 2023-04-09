#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	int	i = 0;
	Zombie *zombies;

	if (N <= 0)
		return (NULL);
	zombies = new Zombie[N];
	while (i < N)
	{
		zombies[i].set_name(name);
		i++;
	}
	system("leaks -q exe");
	return (zombies);
}

__attribute__((destructor)) static void destructor()
{
	system("leaks -q exe");
}