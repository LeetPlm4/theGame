#include "pch.h"
#include "Cursor.h"
#include <windows.h>

Cursor::Cursor()
{
	char c;
	CONSOLE_SCREEN_BUFFER_INFO con;
	HANDLE hcon = GetStdHandle(STD_OUTPUT_HANDLE);
}


Cursor::~Cursor()
{
}

char  Cursor::getChar()
{

	if (hcon != INVALID_HANDLE_VALUE && GetConsoleScreenBufferInfo(hcon, &con))
	{
		DWORD read = 0;
		if (!ReadConsoleOutputCharacterA(hcon, &c, 1, con.dwCursorPosition, &read) || read != 1)
			c = '\0';
	}
	return c;
}

char  Cursor::getChar(int x, int y)
{
	COORD getcharcoord = { x, y };

	if (hcon != INVALID_HANDLE_VALUE && GetConsoleScreenBufferInfo(hcon, &con))
	{
		DWORD read = 0;
		if (!ReadConsoleOutputCharacterA(hcon, &c, 1, getcharcoord, &read) || read != 1)
			c = '\0';
	}
	return c;
}

void  Cursor::GoToXY(int x, int y)
{
	COORD setcoord = { x , y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), setcoord);
}