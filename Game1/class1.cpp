#include<vector>
#include"class1.h"
#include<iostream>
Screen::Screen()
{
	std::vector<char> vector1;
	for( int i = 0; i < height; ++i )
		vector1.push_back( '.' );
	for(int i = 0; i < width; i++)
		outLook.push_back(vector1);
};
void Screen::Make()
{
	std::cout<<"\033[2J\033[1;1H"<<std::endl;
	for(int i=0; i<height; i++)
	{
		for(int u=0; u<width; u++)
			std::cout<<outLook[u][i];
		std::cout<<std::endl;
	}
	std::cout<<std::endl;
};
void Screen::Apear( int iY, int iX, char iS )
{
	outLook[iY][iX]=iS;
	this->Make();
};
void Screen::XYChange( int iY, int iX, char iS )
{
	outLook[iY][iX]=iS;
};
void Screen::Clear()
{
	for( int i = 0; i <height; ++i )
		for( int u = 0; u<width; u++)
			outLook[u][i]='.';
};
