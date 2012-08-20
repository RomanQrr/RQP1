#include <unistd.h>
#include <ctime>
#include <cstdlib>

#include"ChainClass.h"
int main()
{
	srand(time(0));
	Chain world;
	while(world.IsRunning())
	{
		world.CreateE();
		world.MoveAllE();
		world.Shoot();
		usleep(500000);
	}

	return 0;
}
