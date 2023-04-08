#include <iostream>
#include <string>

class Zombie
{
private:
	std::string	name;
	/* data */
public:
	Zombie(std::string name);
	~Zombie();
	void	announce( void );
	Zombie*	newZombie( std::string name );
	void	randomChump( std::string name );
};

Zombie::Zombie(std::string name){
	this->name = name;
	this->announce();
}

Zombie::~Zombie(){
	std::cout << this->name << ": destroied" << std::endl;
}

Zombie* newZombie( std::string name ){
	Zombie	*instance =  new Zombie(name);
	return (instance);
}

void	Zombie::announce( void ){
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}