#include"class2.h"
#include<iostream>
Object::Object()
{
	alive=1;
};
Object::~Object()
{
	std::cout<<"Объект уничтожен."<<std::endl;
};
void Object::Destroy()
{
	symbol='*';
	alive=0;
};
Player::Player()
{
	x=4;
	y=2;
	symbol='^';
	hp=3;
};
Player::~Player()
{
	std::cout<<"Игрок подбит! ";
};
void Player::PShoot()
{
	
};
