#include<string>
#include<iostream>
class World
{
public:
	World()
	{
		this->SayHi();
		hello="Hi people!\n";
		this->SayHi();
	};
	std::string SayHi()
	{
		return hello;
	};
private:
	std::string hello;
	
};
int main()
{
	World myWorld;
	std::cout<<myWorld.SayHi();
	return 0;
}
