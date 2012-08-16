#include"ChainClass.h"
#include<vector>
Chain::Chain()
{
	
};
void Chain::CreateE()
{
	vObject.push_back( Enemy() );
	vObject.back()->Getx=this->inx;
	vObject.back()->Gety=this->iny;
};
