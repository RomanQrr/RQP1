#include"class2.h"
#include<iostream>
Object::Object()
{
	alive=true;
	m_tickNum=0;
}
Object::~Object()
{
	std::cout<<"Объект уничтожен."<<std::endl;
}
void Object::Destroy()
{
	symbol='*';
	alive=false;
}
void Object::MoveDown()
{
	if(++m_tickNum == deley)
	{
		x++;
		m_tickNum=0;
	}
}
Player::Player()
{
	x=4;
	y=2;
	symbol='^';
	hp=3;
}
Player::~Player()
{
	std::cout<<"Игрок подбит! ";
}
void Player::PShoot()
{
	
}

bool Player::Damage()
{
	if( --hp <= 0 )
		return false;
	return true;	
}
