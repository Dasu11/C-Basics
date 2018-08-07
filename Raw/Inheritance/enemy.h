#pragma once

class weapontype;

class enemy
{
public:
	enemy();
	~enemy();

	void SetType(weapontype* _weapontype);
	void SetRace(enemy* _enemyRace);
	void DisplayRace();
};

