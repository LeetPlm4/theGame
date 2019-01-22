#pragma once
class Player
{
public:

	int Control();
	void setPos(unsigned short int x, unsigned short int y);

	void setX(int x);
	void setY(int y);
	void setMap(int m);
	int getX();
	int getY();
	int getMap();


private:
	unsigned short int pX;
	unsigned short int pY;
	unsigned short int pMap;

};
