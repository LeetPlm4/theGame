#pragma once
class Player
{
public:

	int Control();
	void setPos(unsigned short int x, unsigned short int y);

	void setX(int x);
	void setY(int y);
	void setMap(int m);
	void setHP(int hp);

	int getX();
	int getY();
	int getMap();
	int getHP();

	

private:
	unsigned short int pHP;
	unsigned short int pX;
	unsigned short int pY;
	unsigned short int pMap;
	

};
