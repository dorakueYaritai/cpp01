#include <string>
#include <iostream>

int	main()
{
	std::string str("HI THIS IS BREIN");
	std::string *stringPTR;
	stringPTR = &str;
	std::string& stringREF = str;

	std::cout << "str			ptr:" << &str << std::endl;
	std::cout << "stringPTR		ptr:" << &stringPTR << std::endl;
	std::cout << "stringREF		ptr:" << &stringREF << std::endl;
	std::cout << "====================================================" << std::endl;
	std::cout << "str			value:" << str << std::endl;
	std::cout << "stringPTR		value:" << *stringPTR << std::endl;
	std::cout << "stringREF		value:" << stringREF << std::endl;
}
