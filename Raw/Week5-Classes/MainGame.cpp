#include <iostream>
#include <Windows.h>
#include<time.h>
#include<stdlib.h>
#include<stdio.h>
#include "KillerRobot.h"

using namespace std;

int main() 
{
	KillerRobot Z800, Z1000, ZX;
	srand(time(0));
	Z800.SetHealth((rand() % 20 + 80));
	Z1000.SetHealth((rand() % 20 + 80));
	ZX.SetHealth((rand() % 20 + 80));

	Z800.SetInsanity((rand() % 10 + 1));
	Z1000.SetInsanity((rand() % 10 + 1));
	ZX.SetInsanity((rand() % 10 + 1));

	Z800.CheckLifeSigns();
	Z1000.CheckLifeSigns();
	ZX.CheckLifeSigns();

	Z800.RandomlyLoseHealth();
	Z1000.RandomlyLoseHealth();
	ZX.RandomlyLoseHealth();

	cout <<endl;

	Z800.CheckLifeSigns();
	Z1000.CheckLifeSigns();
	ZX.CheckLifeSigns();

	//cout << <<endl;
	system("pause");
	return 0;
}