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
	x=3;
	y=5;
	symbol='^';
	hp=3;
};
void Player::PShot()
{
	
};
Enemy::Enemy()
{
	x=3;
	y=1;
	symbol='T';
	hp=1;
};
void Enemy::EMoveDown()
{
	y++;
};
