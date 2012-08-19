#include"Gunz.h"
#include"class2.h"
Gun1::Gun1()
{
	symbol='o'
};
Bullet * Gun1::Shoot();
{
	Bullet * bullet = new Bullet();
	bullet->symbol=symbol;
	return bullet;
};
