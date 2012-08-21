#ifndef class2_h
#define class2_h
#include"const.h"
//Класс объектов
class Object
{
public:
	Object(); //Конструктор
	~Object();
	void Destroy(); //Уничтожение
	bool IsAlive() {return alive;}
	virtual void MoveDown();
	bool TryToShoot();
	int x; //Координата Х
	int y; //Координата Y
	char symbol;
	int deley;
	int m_tickNum;
	int hp;
	int m_shotDeley;

private:
	bool alive;
};

//Класс игрока

//Класс врагов

#endif
