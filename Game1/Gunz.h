#ifndef Gunz_h
#define Gunz_h
#include"BulletStorm.h"
class Gun1
{
public:
	Gun1();
	virtual Shot * Shoot();
protected:
	char symbol;
};
#endif
