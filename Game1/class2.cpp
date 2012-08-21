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
Player::Player()
{
	x=height-1;
	y=width/2;
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
