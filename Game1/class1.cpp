#include<vector>
#include"class1.h"
#include<iostream>
Screen::Screen()
{
	std::vector<char> vector1;
	for( int i = 0; i <5; ++i )
		vector1.push_back( '.' );
	for(int i=0; i<5; i++)
		outLook.push_back(vector1);
};
void Screen::Make()
{
	for(int i=0; i<5; i++)
	{
		for(int u=0; u<5; u++)
			std::cout<<outLook[u][i];
		std::cout<<std::endl;
	}
};
void Screen::Apear()
{
	outLook[pMainObj->Getx][pMainObj->Gety]=symbol;
};
