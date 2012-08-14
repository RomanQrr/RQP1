#include<string>
#include"World.h"
std::string World::SayHi()
{
	return hello;
};
World::World()
{
	hello="Hi people!\n";
};
