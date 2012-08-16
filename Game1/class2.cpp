#include"class2.h"
Object::Object()
{
	
};
void Object::Destroy()
{
	symbol='*';
	fild.Apear();
};
Player::Player()
{
	x=3;
	y=5;
	symbol='^';
	fild.Apear();
};
void Player::PShot()
{
	
};
Enemy::Enemy()
{
	
};
void Enemy::EMoveDown()
{
	y++;
}
