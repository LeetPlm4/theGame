#include "pch.h"
#include "FileProcessing.h"
#include <fstream>


FileProcessing::FileProcessing()
{
}


FileProcessing::~FileProcessing()
{
}

void FileProcessing::CreatePoster(int postrID)
{
	std::ofstream poster;
	poster.open("cppstudio.txt");
	poster << "������ � ������� � �++";
	poster.close();

}