#include"ChainClass.h"
#include<vector>
#include<iostream>
#include<cstdlib>
Chain::Chain()
{
	fild.Apear(player.y, player.x, player.symbol);
	running = true;
	countE=0;
}

void Chain::CreateE()
{
	/*int countE;
	for(int i=0; i<vEnemy.size(); i++)
		if(vEnemy[i]->IsAlive())
			countE++;
	if(countE<10)
	{*/
		Enemy * enemy = new Enemy();
		vEnemy.push_back( enemy );
		fild.Apear(vEnemy.back()->y, vEnemy.back()->x, vEnemy.back()->symbol);
		countE++;
	//}
}

void Chain::MoveAllE( int iCommand )
{
	if( iCommand == 'a' )
	{
		fild.XYChange(player.y, player.x, '.');
		player.MoveL();
		fild.XYChange(player.y, player.x, player.symbol);
	}
	if( iCommand == 'd' )
	{
		fild.XYChange(player.y, player.x, '.');
		player.MoveR();
		fild.XYChange(player.y, player.x, player.symbol);
	}
	if( iCommand == 32 )
	{
			vBullet.push_back( player.Shoot() );
			vBullet.back()->y=player.y;
			vBullet.back()->x=player.x-1;
			fild.XYChange(vBullet.back()->y, vBullet.back()->x, vBullet.back()->symbol);
	}
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
			vEnemy[i]->MoveDown();
			if(vEnemy[i]->y>=width || vEnemy[i]->y<0 || vEnemy[i]->x>=height || vEnemy[i]->x<0)
			{
				vEnemy[i]->Destroy();
				countE--;
				continue;
			}

			if(vEnemy[i]->y==player.y && vEnemy[i]->x==player.x)
			{
				if(!player.Damage())
					this->Stop();
				vEnemy[i]->Destroy();
				countE--;
				continue;
			}

			for(int u=0; u<vBullet.size(); u++)
			{
				if(vBullet[u]->IsAlive() && vEnemy[i]->y==vBullet[u]->y && vEnemy[i]->x==vBullet[u]->x)
				{
					vEnemy[i]->Destroy();
					fild.XYChange(vEnemy[i]->y, vEnemy[i]->x, vEnemy[i]->symbol);
					vBullet[u]->Destroy();
					countE--;
					break;
				}
			}
			if(vEnemy[i]->IsAlive())
			{
				fild.XYChange(vEnemy[i]->y, vEnemy[i]->x, vEnemy[i]->symbol);
				if(vEnemy[i]->TryToShoot())
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
		}
	}
	fild.XYChange(player.y, player.x, player.symbol);
	fild.Make();
}

/*void Chain::Shoot()
{
	for(int i=0; i<vEnemy.size(); i++)
	{
		if(vEnemy[i]->IsAlive())
		{
			vEnemy[i]->TryToShoot();
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
};*/
