#ifndef class2_h
#define class2_h
//Класс объектов
class Object
{
public:
	Object(); //Конструктор
	void Destroy(); //Уничтожение
	int x; //Координата Х
	int y; //Координата Y
	char symbol;
	int hp;
};
//Класс игрока
class Player: public Object
{
public:	
	Player(); //Конструктор
	void PShot(); //Стрельба игрока
	void PMove(); //Движение
};
//Класс врагов
class Enemy: public Object
{
public:
	Enemy();
	void EMoveDown(); //Движение
	int spd;
};
class Bullet: public Enemy
{
public:
	Bullet();
};
#endif
