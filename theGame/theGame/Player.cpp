#include "pch.h"
#include "Player.h"
#include <conio.h>

extern char mapArray[15][31];
void Player::setPos(unsigned short int x, unsigned short int y)
{
	pX = x;
	pY = y;
};

void Player::setX(int x) { pX = x; };
void Player::setY(int y) { pY = y; };
void Player::setMap(int m) { pMap = m; };
int Player::getX() { return pX; };
int Player::getY() { return pY; };
int Player::getMap() { return pMap; };

int Player::Control() 
{
	unsigned short int pprX = getX();
	unsigned short int pprY = getY();
	int keyPress = _getch();

	switch (keyPress)
	{
	case(72): {pprY--; break; }//u
	case(75): {pprX--; break; }//l
	case(80): {pprY++; break; }//d
	case(77): {pprX++; break; }//r
	default:break;
	}
	if (pprX == getX() && pprY == getY())
	{
		return 0;
	}
	if (mapArray[pprY][pprX] != '#')
	{
		setPos(pprX, pprY);
		return 1;
	}
};