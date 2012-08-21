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
	void Stop() {running = false;}
	bool IsRunning() { return running; }
	void CreateE();
	void MoveAllE( int iCommand );
private:
	Player player;
	Screen fild;
	std::vector< Enemy * > vEnemy;
	std::vector< Shot * > vBullet;
	bool running;
};
#endif
