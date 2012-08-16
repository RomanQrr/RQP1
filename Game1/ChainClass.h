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
private:
	Screen fild;
	std::vector<Object *> vObject;
	int inx;
	int iny;
};
#endif
