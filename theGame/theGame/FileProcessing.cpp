#include "pch.h"
#include "FileProcessing.h"
#include <fstream>
#include <direct.h>
#include <string>
#include <iostream>
//#include <stdlib.h> 


/*FileProcessing::FileProcessing()
{
}


FileProcessing::~FileProcessing()
{
}
*/
void FileProcessing::GameSave(int pX, int pY, int mID, int hp)
{
	std::ofstream save;
	save.open("LOVE\\GAMESAVE.txt");
	save << pX << std::endl << pY << std::endl << mID << std::endl << hp;
	save.close();
}

int FileProcessing::GameLoad(int sID)
{

	//std::fstream load("LOVE\\GAMESAVE.txt");

	std::cout << std::endl;
	std::string s;
	int result = 0;

	std::ifstream load("LOVE\\GAMESAVE.txt");
	
	for (int i = 0; sID >= i; i++) {
		if (load.eof())
			break;
			
		getline(load, s);
	}
	for (int i = 0; i < s.length(); i++) {
		result = result * 10 + s[i] - 0x30;
	}
	//std::cout << s << ' ';
	//std::cout << std::endl << std::endl;
	//result = atoi(s.c_str());
	/*
	std::ifstream load("LOVE\\GAMESAVE.txt");
	std::string s;

	for (int i = 1; i <= sID; i++)
		std::getline(load, s);

	std::getline(load, s);
	std::cout << s;
	*/
	/*
	int buff[50];
	char* stg;
	//std::string str;
	int Num = 0;

	std::ifstream load("LOVE\\GAMESAVE.txt");
	load.getline(stg, sID);

	return Num;
	*/
	return result;
}

void FileProcessing::CreatePoster(int postrID)
{
	const static int BUF_SIZE = 18432;
	char buf[BUF_SIZE];

	_mkdir("LOVE");
	std::ifstream in("QwDer",std::ios_base::in | std::ios_base::binary);
	std::ofstream out("LOVE\\TheGOD.png", std::ios_base::out | std::ios_base::binary); 

	do {
		in.read(&buf[0], BUF_SIZE);      
		out.write(&buf[0], in.gcount()); 
	} while (in.gcount() > 0);     

	in.close();
	out.close();
}