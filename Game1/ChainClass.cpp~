#include"ChainClass.h"
#include<vector>
#include<iostream>
Chain::Chain()
{
	countB=0;
	countE=0;
	live=1;
	fild.Apear(player.y, player.x, player.symbol);
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
		if(vEnemy[i]->alive==1)
		{
			std::cout<<"Начало движения"<<std::endl;
			vEnemy[i]->EMoveDown();
			if(vEnemy[i]->y>4 or vEnemy[i]->y<0 or vEnemy[i]->x>4 or vEnemy[i]->x<0)
			{
				//vEnemy[i]->~Object();
				live=0;
				vEnemy[i]->alive=0;
			}
			for(int u=0; u<countB; u++)
			{
				if(live==1)
				{
					if(vEnemy[i]->y==vBullet[u]->y && vEnemy[i]->x==vBullet[u]->x)
					{
						vEnemy[i]->Destroy();
						fild.XYChange(vEnemy[i]->y, vEnemy[i]->x, vEnemy[i]->symbol);
						//vEnemy[i]->~Object();
						//vBullet[u]->~Bullet();
						live=0;
						vEnemy[i]->alive=0
						vEnemy[u]->alive=0
						u=countB;
					}
				}
			}
			if(live==1)
			{
				if(vEnemy[i]->y==player.y && vEnemy[i]->x==player.x)
				{
					player.hp--;
					vEnemy[i]->alive=0;
					live=0;
				}
			}
			if(live==1)
				fild.XYChange(vEnemy[i]->y, vEnemy[i]->x, vEnemy[i]->symbol);
			}
		}
		for(int i=0; i<countB; i++)
			if(vBullet[i]->alive==1)
				fild.XYChange(vBullet[i]->y, vBullet[i]->x, vBullet[i]->symbol);
	fild.XYChange(player.y, player.x, player.symbol);
	fild.Make();
};
void Chain::Shoot()
{
	for(int i=0; i<countE; i++)
	{
		if(fild.outLook[vEnemy[i]->y][vEnemy[i]->x+1]=='.')
		{
			vBullet.push_back( vEnemy[i]->Shoot() );
			vBullet.back()->y=vEnemy[i]->y;
			vBullet.back()->x=vEnemy[i]->x+1;
			fild.XYChange(vBullet.back()->y, vBullet.back()->x, vBullet.back()->symbol);
			countB++;
		}
	}
	fild.Make();
};
