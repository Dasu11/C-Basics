#include "enemy.h"
#include "Dragon.h"
#include "wizard.h"

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

}

void enemy::SetRace(enemy* _enemy) 
{
	_enemy->DisplayRace();
	if (typeid(_enemy) == typeid(Dragon))
	{

	}

}