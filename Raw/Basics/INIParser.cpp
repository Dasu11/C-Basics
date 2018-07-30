#include <iostream>
#include <Windows.h>
#include <fstream>
#include <vector>
#include <algorithm>
#include <string>
#include <cstring>

using namespace std;

string sFileName = "GameInit.ini";

struct INIParser
{
	string filename;

	//Function ( Recommended)
	// Add more if you want
	string ClipWhiteSpace(const string data);
	string StringAfterACharacter(const string data, const char character);
};

int main() 
{
	string data;
	string sActualData;
	ifstream inFile;
	inFile.open(sFileName, ios::in);
	while (!inFile.eof())
	{
		inFile >> data;
		cout << data << endl;
		sActualData.append(data);
	}
	inFile.close();

	cout << sActualData << endl;

	system("pause");
	return 0;
}

string INIParser::ClipWhiteSpace(const string data)
{
	return nullptr;
}

string INIParser::StringAfterACharacter(const string data, const char character)
{
	return nullptr;
}