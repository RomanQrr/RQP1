#include"class2.h"
#include<iostream>
Object::Object()
{
	
};
Object::~Object()
{
	std::cout<<"Объект уничтожен."<<std::endl;
};
void Object::Destroy()
{
	symbol='*';
};
Player::Player()
{
	x=4;
	y=2;
	symbol='^';
	hp=3;
};
void Player::PShot()
{
	
};
Enemy::Enemy()
{
	x=0;
	y=2;
	symbol='T';
	hp=1;
	spd=1;
};
void Enemy::EMoveDown()
{
	x++;
};
Bullet::Bullet()
{
	x=0;
	y=0;
	symbol='o';
	hp=1;
	spd=2;
};
