#include "Herl.hpp"
#include <iostream>

int	main(int argc, char *argv[]){
	Herl	Herl1;

	Herl1.complain("DEBUG");
	Herl1.complain("INFO");
	Herl1.complain("WARNING");
	Herl1.complain("ERROR");
	Herl1.complain("ERROR1");
	if (argc == 2)
	{
		std::cout << "============= YOUR ARG =============" << GLEEN << std::endl;
		Herl1.complain(argv[1]);
		std::cout << WHITE << "============= YOUR ARG =============" << std::endl;
	}
}
