#include"class2.h"
#include<iostream>
Object::Object()
{
	alive=true;
	m_tickNum=0;
}
Object::~Object()
{
	std::cout<<"Game Over!"<<std::endl;
}
void Object::Destroy()
{
	symbol='*';
	alive=false;
}
void Object::MoveDown()
{
	if(++m_tickNum % deley == 0)
	{
		x++;
	}
}
bool Object::TryToShoot()
{
	if(m_tickNum % m_shotDeley == 0)
		return true;
	return false;
}

