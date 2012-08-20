#ifndef class2_h
#define class2_h

//Класс объектов
class Object
{
public:
	Object(); //Конструктор
	~Object();
	void Destroy(); //Уничтожение
	int x; //Координата Х
	int y; //Координата Y
	char symbol;
	int spd;
	int hp;
	bool alive;
};

//Класс игрока
class Player: public Object
{
public:	
	Player(); //Конструктор
	~Player();
	void PShoot(); //Стрельба игрока
	void PMove(); //Движение
};
//Класс врагов

#endif
