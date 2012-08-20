#ifndef BigBadBand_h
#define BigBadBand_h
#include "class2.h"
#include"BulletStorm.h"
#include"Gunz.h"
class Enemy: public Object
{
public:
	Enemy();
	void EMoveDown(); //Движение
	Shot * Shoot();
	Gun1 * mygun;
};

#endif
