#include"BigBadBand.h"
Enemy::Enemy()
{
	x=0;
	y=2;
	symbol='T';
	hp=1;
	spd=1;
	mygun= new Gun1();
};
void Enemy::EMoveDown()
{
	x++;
};
Shot * Enemy::Shoot()
{
	Shot * gh = mygun->Shoot();
	return gh;
};
