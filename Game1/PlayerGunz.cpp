#include"PlayerGunz.h"
PGun1::PGun1()
{
	symbol='A';
}
Shot * PGun1::Shoot()
{
	Shot * bullet = new PShot();
	bullet->symbol=symbol;
	return bullet;
}
