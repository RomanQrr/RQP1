#include"BigBadBand.h"
#include<cstdlib>
Enemy::Enemy()
{
	x=rand() % 3;
	y=rand() % width;
	symbol='T';
	hp=1;
	deley=300;
	m_shotDeley=1000;
	mygun= new Gun1();
};
Shot * Enemy::Shoot()
{
	Shot * gh = mygun->Shoot();
	return gh;
};
