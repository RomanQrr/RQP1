#include"ChainClass.h"
#include<vector>
#include<iostream>
Chain::Chain()
{
	fild.Apear(player.y, player.x, player.symbol);
	running = true;
}

void Chain::CreateE()
{
	Enemy * enemy = new Enemy();
	vEnemy.push_back( enemy );
	fild.Apear(vEnemy.back()->y, vEnemy.back()->x, vEnemy.back()->symbol);
}

void Chain::MoveAllE()
{
	fild.Clear();
	for(int i=0; i<vBullet.size(); i++)
	{
		if(vBullet[i]->IsAlive())
		{
			vBullet[i]->MoveDown();
			if(vBullet[i]->y>=width || vBullet[i]->y<0 || vBullet[i]->x>=height || vBullet[i]->x<0)
			{
				vBullet[i]->Destroy();
				continue;
			}

			if(vBullet[i]->y==player.y && vBullet[i]->x==player.x)
			{
				if(!player.Damage())
					this->Stop();
				vBullet[i]->Destroy();
				continue;
			}
			if(vBullet[i]->IsAlive())
				fild.XYChange(vBullet[i]->y, vBullet[i]->x, vBullet[i]->symbol);
		}
	}
	for(int i=0; i<vEnemy.size(); i++)
	{
		if(vEnemy[i]->IsAlive())
		{
			std::cout<<"Начало движения"<<std::endl;
			vEnemy[i]->MoveDown();
			if(vEnemy[i]->y>=width || vEnemy[i]->y<0 || vEnemy[i]->x>=height || vEnemy[i]->x<0)
			{
				vEnemy[i]->Destroy();
				continue;
			}

			if(vEnemy[i]->y==player.y && vEnemy[i]->x==player.x)
			{
				if(!player.Damage())
					this->Stop();
				vEnemy[i]->Destroy();
				continue;
			}

			for(int u=0; u<vBullet.size(); u++)
			{
				if(vBullet[u]->IsAlive() && vEnemy[i]->y==vBullet[u]->y && vEnemy[i]->x==vBullet[u]->x)
				{
					vEnemy[i]->Destroy();
					fild.XYChange(vEnemy[i]->y, vEnemy[i]->x, vEnemy[i]->symbol);
					vBullet[u]->Destroy();
					break;
				}
			}
			if(vEnemy[i]->IsAlive())
				fild.XYChange(vEnemy[i]->y, vEnemy[i]->x, vEnemy[i]->symbol);
		}
	}
	fild.XYChange(player.y, player.x, player.symbol);
	fild.Make();
}

void Chain::Shoot()
{
	for(int i=0; i<vEnemy.size(); i++)
	{
		if(vEnemy[i]->IsAlive())
		{
			if(fild.outLook[vEnemy[i]->y][vEnemy[i]->x+1]=='.')
			{
				vBullet.push_back( vEnemy[i]->Shoot() );
				vBullet.back()->y=vEnemy[i]->y;
				vBullet.back()->x=vEnemy[i]->x+1;
				fild.XYChange(vBullet.back()->y, vBullet.back()->x, vBullet.back()->symbol);
			}
		}
	}
	fild.Make();
};
