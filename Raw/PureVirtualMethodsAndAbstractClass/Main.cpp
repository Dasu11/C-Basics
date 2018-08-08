#include "CEnemy.h"
#include "CWerewolf.h"

#include <iostream>
#include <Windows.h>

using namespace std;

int main() 
{

	CEnemy* _enemy = new CWerewolf("Mitul", 100, 100);

	_enemy->Type();
	_enemy->Attack();


	delete _enemy;
	_enemy = 0;

	system("pause");
	return 0;
}