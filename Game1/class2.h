//Класс объектов
class Object
{
public:
	Object(); //Конструктор
	void Destroy(); //Уничтожение
	int x; //Координата Х
	int y; //Координата Y
	char symbol;
};
//Класс игрока
class Player: public Object
{
public:	
	Player(); //Конструктор
	void PShot(); //Стрельба игрока
	void PMove(); //Движение
	int hp; //Жизнь игрока
};
//Класс врагов
class Enemy: public Object
{
	Enemy();
	void EMoveDown(); //Движение
};
