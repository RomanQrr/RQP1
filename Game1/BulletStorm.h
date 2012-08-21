#ifndef Storm_h
#define Storm_h

#include "class2.h"

class Shot: public Object
{
public:
	Shot();
	~Shot();
};
class PShot: public Shot
{
public:
	void MoveDown();
};
#endif
