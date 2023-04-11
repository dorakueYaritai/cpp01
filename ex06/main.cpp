#include "Herl.hpp"
#include <iostream>

int	main(int argc, char *argv[]){
	Herl	Herl1;

	std::cout << "============= DEBUG MSG =============" << GLEEN << std::endl;
	Herl1.filter("DEBUG");
	std::cout << WHITE;

	std::cout << "============= INFO MSG =============" << GLEEN << std::endl;
	Herl1.filter("INFO");
	std::cout << WHITE;

	std::cout << "============= WARNING MSG =============" << GLEEN << std::endl;
	Herl1.filter("WARNING");
	std::cout << WHITE ;

	std::cout << "============= ERROR MSG =============" << GLEEN << std::endl;
	Herl1.filter("ERROR");
	std::cout << WHITE ;

	std::cout << "============= ARG=ERROR1 =============" << GLEEN << std::endl;
	Herl1.filter("ERROR1");
	std::cout << WHITE ;

	if (argc == 2)
	{
		std::cout << "============= YOUR ARG " << argv[1] << " =============" << GLEEN << std::endl;
		Herl1.filter(argv[1]);
	}
	std::cout << WHITE << "============= FIN =============" << std::endl;
}

__attribute__((destructor)) static void destructor()
{
	system("leaks -q exe");
}
