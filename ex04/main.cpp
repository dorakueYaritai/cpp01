#include <iostream>
#include <fstream>
#include <string>

#define ERR_ARGC "ARGC NUM IS INVALID"
#define ERR_OPEN_FILE "FAILED TO OPEN FILE"
#define ERR_CREATE_FILE "FAILED TO CREATE FILE"

#define ERROR 1
#define SUCSESS 0

// #define cout "std::cout"
// #define cin "std::cin"
// #define endl "std::endl"



// int	main( int argc, char *argv[] ){
// 	if (argc != 4)
// 	{
// 		std::cout << ERR_ARGC << std::endl;
// 		return (1);
// 	}
// 	std::ifstream	ifs(argv[1]);
// 	if (ifs.fail())
// 	{
// 		std::cout << ERR_OPEN_FILE << std::endl;
// 		return (2);
// 	}
// 	std::string	filename = argv[1];
// 	filename.append(".replace");
// 	std::ofstream	ofs(filename);
// 	if (ifs.fail())
// 	{
// 		std::cout << ERR_CREATE_FILE << std::endl;
// 		return (3);
// 	}
// 	std::string	text;

// 	// while (!ifs.eof())
// 	// {
// 	// 	std::getline(ifs, text);
// 	// 	ofs << text << std::endl;
// 	// }
// 	std::string buf;
// 	while (1)
// 	{
// 		std::getline(ifs, buf);
// 		text.append(buf);
// 		if (ifs.eof())
// 			break;
// 		else
// 			text.append("\n");
// 	}
// 	// while (!ofs.eof())
// 	// {
// 		ofs << text;
// 	// }

// 	// std::cout << text << std::endl;
// }

bool	read_ifs(char *argv, std::string& text){
	std::string buf;

	std::ifstream	ifs(argv);
	if (ifs.fail())
		return (ERROR);
	while (1)
	{
		std::getline(ifs, buf);
		text.append(buf);
		if (ifs.eof())
			break;
		else
			text.append("\n");
	}
	return (SUCSESS);
}

// std::string	replace(std::string text, char *search, char *change)
// {
// 	// bool		isfirst = true;
// 	std::size_t	start = 0;
// 	std::size_t	find_index;
// 	std::string	ret;
// 	std::size_t	search_len;
	
// 	search_len = std::strlen(search);
// 	std::cout << text << std:: endl;
// 	std::cout << ret << std:: endl;
// 	while (1)
// 	{
// 		find_index = text.find(search, start);
// 		if (find_index == std::string::npos)
// 		{
// 			ret.append(text, start);
// 			break ;
// 		}
// 		std::cout << search << " find" << std::endl;
// 		std::cout << "=========================" << std::endl;
// 		std::cout << "before 1 findindex:" << find_index << "  start:" << start << "  " << ret << std::endl;
// 		ret.append(text, start, find_index - start);
// 		std::cout << "before 2 " << ret << std::endl;
// 		ret.append(change);
// 		std::cout << "before 3 " << ret << std::endl;
// 		std::cout << "=========================" << std::endl;
// 		start = find_index + search_len;
// 	}
// 	std::cout << ret << std::endl;
// 	return (ret);
// }

bool	makeReplace(std::string text, std::string file, char *search, char *change)
{
	std::size_t			start = 0;
	std::size_t			find_index;
	const std::size_t	search_len = std::strlen(search);
	std::string			ret;

	if (search[0] == '\0')
		return (ERROR);

	file.append(".replace");
	std::ofstream	ofs(file.c_str());
	if (ofs.fail())
		return (ERROR);
	while (1)
	{
		find_index = text.find(search, start);
		ret.append(text, start, find_index - start);
		if (find_index == std::string::npos)
			break ;
		ret.append(change);
		start = find_index + search_len;
	}
	ofs << ret;
	return (SUCSESS);
}

int	main( int argc, char *argv[] ){
	if (argc != 4)
		return (1);

	std::string text;
	if (read_ifs(argv[1], text))
		return (2);
	if (makeReplace(text, argv[1], argv[2], argv[3]))
		return (3);
}

__attribute__((destructor)) static void destructor()
{
	system("leaks -q exe");
}
