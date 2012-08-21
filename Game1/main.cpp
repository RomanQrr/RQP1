#include <unistd.h>
#include <ctime>
#include <iostream>
#include <cstdlib>
#include <curses.h>

#include"ChainClass.h"
int main()
{
	srand(time(0));
	Chain world;
	int command;
	int countE;
	while(world.IsRunning())
	{
		WINDOW * window = ::initscr();
		::cbreak();
		::nodelay( window, true );
		command = ::getch();
		//std::cout << command << "!!!!!!!!!!!!!" << std::endl; 
		::endwin();
		
		if(countE<10){world.CreateE(); countE++;}
		world.MoveAllE(command);
		usleep(500000);
	}

	return 0;
}
