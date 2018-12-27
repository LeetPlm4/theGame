#pragma once
class FileProcessing
{
public:
	void GameSave(int pX, int pY, int mID);
	int GameLoad(int sID);
	void CreatePoster(int postrID);
	FileProcessing();
	~FileProcessing();
};

