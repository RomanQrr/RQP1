#include"ChainClass.h"
#include<vector>
Chain::Chain()
{
	countE=0;
};
void Chain::CreateE()
{
	Enemy * enemy = new Enemy();
	vEnemy.push_back( enemy );
	fild.Apear(vEnemy.back()->y, vEnemy.back()->x, vEnemy.back()->symbol);
	countE=countE+1;
};
void Chain::MoveAllE()
{
	fild.Clear();
	for(int i=0; i<countE; i++)
	{
		for(int u=0; u<vEnemy[i]->spd; u++)
		{
			vEnemy[i]->EMoveDown();
			if(
		}
		fild.XYChange(vEnemy[i]->y, vEnemy[i]->x, vEnemy[i]->symbol);
	}
	fild.Make();
};
void Chain::Shoot()
{
	for(int i=0; i<countE; i++)
	{
		if(vEnemy[i]->symbol=='T' && fild.outLook[vEnemy[i]->y][vEnemy[i]->x+1]=='.')
		{
			Enemy * enemy = new Bullet();
			vEnemy.push_back( enemy );
			vEnemy.back()->y=vEnemy[i]->y;
			vEnemy.back()->x=vEnemy[i]->x+1;
			fild.XYChange(vEnemy.back()->y, vEnemy.back()->x, vEnemy.back()->symbol);
			countE++;
		}
	}
	fild.Make();
};
