#include"Man.h"
#include<cstdlib>

Man::Man()
{
	srand(0);
	Age=rand() % Man::MaxAge;
};
int Man::WhatAge()
{
	return Age;
};
