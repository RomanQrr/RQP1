#ifndef player_h
#define player_h
#include"class2.h"
#include"PlayerGunz.h"
#include"BulletStorm.h"
class Player: public Object
{
public:	
	Player(); //Конструктор
	bool Damage();
	~Player();
	void MoveL();
	void MoveR();
	Shot * Shoot(); //Движение
	Gun1 * mygun;
};
#endif
