#include "KillerRobot.h"
#include <iostream>;
#include <time.h>

enum EWeapon
{
	LASER_GUN,
	RAIL_GUN,
	QUANTUM_TUNNELLER,
	SPECTRUM_DIFFUSER,
	RAY_RESONATOR,
	PARTICLE_DUALITY_DISSOCIATOR,
	PLASMA_ACCELERATOR
};

KillerRobot::KillerRobot()
{
}


KillerRobot::~KillerRobot()
{
}


void KillerRobot::SetHealth(int health)
{
	iHealth = health;
}

int KillerRobot::GetHealth() const
{
	return iHealth;
}


void KillerRobot::SetInsanity(int insanity)
{
	iInsanity = insanity;
}

int KillerRobot::GetInsanity() const
{
	return iInsanity;
}

//void KillerRobot::SetWeapon(EWeapon weapon)
//{
//	eWeapon = weapon;
//}
//
//EWeapon KillerRobot::GetWeapon() const
//{
//	return eWeapon;
//}

bool KillerRobot::IsDead() 
{
	if (iHealth <= 0)
		return true;
	else
		return false;
}

void KillerRobot::CheckLifeSigns() 
{
	if (iHealth >= 50)
		std::cout << "All subsystems nominal! = "<<iHealth << std::endl;
	else if(iHealth >= 20)
		std::cout << "Artificial life signs draining! = " << iHealth << std::endl;
	else if(iHealth < 20 && iHealth > 0)
		std::cout << "Critical systems implosion imminent! = " << iHealth << std::endl;
	else if(iHealth <= 0)
		std::cout << "01010110" << std::endl;
}

void KillerRobot::CheckInsanity() 
{
	std::cout << "Insanity : " << iInsanity << std::endl;
}

void KillerRobot::RandomlyLoseHealth() 
{
	srand(time(0));
	iHealth -= rand() % 30 +10 ;
}
