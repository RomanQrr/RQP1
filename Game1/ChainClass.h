#ifndef ChainClass_h
#define ChainClass_h
#include"vector"
#include"class1.h"
#include"class2.h"
class Chain
{
public:
	Chain();
	void CreateE();
	void MoveAllE();
	void Shoot();
private:
	Screen fild;
	std::vector< Enemy * > vEnemy;
	//int inx;
	//int iny;
	int countE;
	int live;
};
#endif
