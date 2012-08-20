#ifndef ChainClass_h
#define ChainClass_h
#include"vector"
#include"class1.h"
#include"class2.h"
#include"BulletStorm.h"
#include"BigBadBand.h"
class Chain
{
public:
	Chain();
	void CreateE();
	void MoveAllE();
	void Shoot();
private:
	Player player;
	Screen fild;
	std::vector< Enemy * > vEnemy;
	std::vector< Shot * > vBullet;
	//int inx;
	//int iny;
	int countE;
	bool live;
	int countB;
};
#endif
