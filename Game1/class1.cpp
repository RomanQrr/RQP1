#include<vector>
#include"class1.h"
#include<iostream>
Screen::Screen()
{
	std::vector<char> vector1;
	for( int i = 0; i < 5; ++i )
		vector1.push_back( '.' );
	for(int i=0; i<5; i++)
		outLook.push_back(vector1);
};
void Screen::Make()
{
	std::cout<<outLook<<std::endl;		
};
