#include <iostream>
#include <Windows.h>
#include <ctime>

#include "archery.h"
#include "Dragon.h"
#include "enemy.h"
#include "weapontype.h"
#include "wizard.h"
#include "melee.h"

using namespace std;

int main() 
{
	enemy* _Enemy;
	weapontype* _WeaponType;
	srand(time_t(0));
	int diceVal = rand() % 7;

	if (diceVal <= 3) {
		_Enemy = new Dragon();
		//reinterpret_cast<Dragon*>(_Enemy)->DisplayRace();
	}                    
	else {
		_Enemy = new wizard();
		//reinterpret_cast<wizard*>(_Enemy)->DisplayRace();
	}
	
	_Enemy->DisplayRace();
	diceVal = rand() % 7;
	if (diceVal <= 3) {
		_WeaponType = new archery();
	//	reinterpret_cast<archery*>(_WeaponType)->DisplayMyType();
	}
	else {
		_WeaponType = new melee();
		//reinterpret_cast<melee*>(_WeaponType)->DisplayMyType();
	}

	_WeaponType->DisplayMyType();   

	_Enemy->SetRace(new Dragon());
	_Enemy->SetType(new archery());
	
	system("pause");
	return 0;

}