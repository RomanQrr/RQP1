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
	while(world.IsRunning())
	{
		WINDOW * window = ::initscr();
		::cbreak();
		::nodelay( window, true );
		command = ::getch();
		//std::cout << command << "!!!!!!!!!!!!!" << std::endl; 
		::endwin();
		
		if(world.countE<10){world.CreateE();}
		world.MoveAllE(command);
		usleep(5000);
	}

	return 0;
}
