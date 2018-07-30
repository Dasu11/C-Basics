#include <iostream>
#include <conio.h>
#include <Windows.h>

enum ENEMYTYPE 
{
 SIMPLE,
 COMPLEX
};

struct Enemies
{
	char *name = nullptr;
	ENEMYTYPE eType;
	unsigned int count;           
};

int mainff() 
{
	Enemies* _enemies = new Enemies[5];

	//for (int j = 0; j < 5; j++)
	//{
	//	*(_enemies + j) = new Enemies();
	//}

	for (int i = 0; i < 5; i++)
	{

		(_enemies + i)->name = "das";
		(_enemies + i)->eType = SIMPLE;
		(_enemies + i)->count = 3;
	}

	int totalEnemies = 0;
	for (int i = 0; i < 5; i++)
	{
		totalEnemies += (_enemies + i)->count;
	}

	std::cout << totalEnemies<< std::endl;

	system("pause");
	_getch();
	return 0;
}