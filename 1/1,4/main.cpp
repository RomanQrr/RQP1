#include<iostream>
#include"Man.h"


int main()
{
	int i=2;	
	Man myMan;
	//std::cin>>Man::MaxAge;
	while(i > 0)
	{
		std::cout<<"My age is "<<myMan.WhatAge()<<std::endl;
		myMan.Age = myMan.Age + 1;
		if(myMan.Age == 70)
		{
			return 0;
		}
	};
}
