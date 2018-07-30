#pragma once
class KillerRobot
{

private:

	int iHealth;
	int iInsanity;
	//EWeapon eWeapon;

public:
	KillerRobot();
	~KillerRobot();

	void SetHealth(int health);
	int GetHealth() const;
	void SetInsanity(int insanity);
	int GetInsanity() const;
	/*void SetWeapon(EWeapon weapon);
	EWeapon GetWeapon() const;*/
	bool IsDead();
	void CheckLifeSigns();
	void CheckInsanity();
	void RandomlyLoseHealth();
};

