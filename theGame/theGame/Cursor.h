#pragma once
#include <windows.h>

class Cursor
{
public:
	Cursor();
	~Cursor();
	void GoToXY(int x, int y);
	char getChar();
	char getChar(int x, int y);
private:
	char c;
	CONSOLE_SCREEN_BUFFER_INFO con;
	HANDLE hcon;
};

