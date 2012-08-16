#include"ChainClass.h"
#include<vector>
Chain::Chain()
{
	
};
void Chain::CreateE()
{
	Enemy * enemy = new Enemy();
	vObject.push_back( enemy );
	fild.m_f_x=vObject.back()->x;
	fild.m_f_y=vObject.back()->y;
	fild.m_f_s=vObject.back()->symbol;
	fild.Apear;
};
