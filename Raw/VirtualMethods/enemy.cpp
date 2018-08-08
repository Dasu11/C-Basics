#include "enemy.h"
#include "Dragon.h"
#include "wizard.h"
#include "weapontype.h"
#include<iostream>
#include <typeinfo>


enemy::enemy()
{
}

enemy::~enemy()
{
}

void enemy::DisplayRace()
{
	std::cout << "This is Enemy " << std::endl;
}

void enemy::SetType(weapontype * _weapontype)
{
	_weapontype->DisplayMyType();
}

void enemy::SetRace(enemy* _enemy) 
{
	_enemy->DisplayRace();
}