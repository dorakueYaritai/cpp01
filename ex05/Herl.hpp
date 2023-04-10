#ifndef HERL_HPP
#define HERL_HPP

#include <string>

#define NUM_FUNCTIONS 4

class Herl{
private:
	void debug( void );
	void info( void );
	void warning( void );
	void error( void );
	// void	(*complains[NUM_FUNCTIONS])(void);
public:
	Herl();
	~Herl();
	void	(Herl::*complains[NUM_FUNCTIONS])(void);
	void	complain( std::string level );
};

#define BLACK "\x1b[30m"
#define WHITE "\x1b[37m"
#define RED "\x1b[31m"
#define BLUE "\x1b[34m"
#define GLEEN "\x1b[32m"

#endif
