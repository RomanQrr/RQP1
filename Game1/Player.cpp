#include"Player.h"
#include<iostream>
Player::Player()
{
	x=height-1;
	y=width/2;
	symbol='^';
	hp=3;
	mygun= new PGun1();
}
Player::~Player()
{
	std::cout<<"Игрок подбит! ";
}
Shot * Player::Shoot()
{
	Shot * gh = mygun->Shoot();
	return gh;
}

bool Player::Damage()
{
	if( --hp <= 0 )
		return false;
	return true;	
}
void Player::MoveL()
{
	if(y!=0)
		y--;
}
void Player::MoveR()
{
	if(y!=width-1)
		y++;
}
