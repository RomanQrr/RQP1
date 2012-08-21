#include"BulletStorm.h"
Shot::Shot()
{
	x=0;
	y=0;
	symbol='o';
	deley=100;
};
Shot::~Shot(){};
void PShot::MoveDown()
{
	if(++m_tickNum % deley == 0)
	{
		x--;
	}

}
