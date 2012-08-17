#include"class2.h"
Object::Object()
{
	
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
};
void Enemy::EMoveDown()
{
	y++;
};
