#include <iostream>
#include <Windows.h>
#include <fstream>
#include <vector>
#include <algorithm>
#include <map>
#include <typeinfo>
#include <string>

using namespace std;

int maintyrr() 
{
	void Splitter(char a[],  int &first, string &second);
	map<int, string> MeraMap;
	char name[100];
	ifstream inFile;
	inFile.open("HIGHSCORES", ios::in);
	int first = 0;
	while (!inFile.eof())
	{
		inFile >> name;
		inFile >> first;
		MeraMap.insert(pair<int, string>(first, name));
	}
	inFile.close();

	for (auto it : MeraMap)
	{
		cout << it.first;
		cout << it.second<< endl;
	}
	
	system("pause");
	return 0;
}

void Splitter(char a[], int &first,string &second)
{
	//int x = 0;
	//bool bReadyToFillSecond = false;

	//int* fir = &first;
	//string* sec = &second;
	//int f = 0;
	//int s = 0;
	//for (x = 0; x < sizeof(a) / sizeof(char); x++) {
	//	if (*(a + x) == ',')
	//	{
	//		bReadyToFillSecond = true;
	//		continue;
	//	}
	//	if (!bReadyToFillSecond)
	//	{
	//		*(fir + f) = *(a + x);
	//		f++;
	//	}
	//	else 
	//	{
	//		*(sec + s) = atoi(*(a + x));
	//		s++;
	//	}
	//}
}

