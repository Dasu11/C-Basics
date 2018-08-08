#include "CWerewolf.h"
#include <iostream>
CWerewolf::CWerewolf()
{

}

CWerewolf::CWerewolf(const char* cName, int iHps, int iXps) 
	:CEnemy(cName, iHps, iXps)
{
	
}

CWerewolf::~CWerewolf(){}

void CWerewolf::Attack()
{
	std::cout << " Name = " << GetName() << std::endl;
	std::cout << " HP = " << GetHp() << std::endl;
	std::cout << " XP = " << GetXp() << std::endl;
}

void CWerewolf::SetBiteDamage(int iNewDamage) 
{
	m_iBiteDamage = iNewDamage;
}

int CWerewolf::GetBiteDamage()const 
{
	return m_iBiteDamage;
}

void CWerewolf::Type() 
{
	std::cout << "Me hu WereWolf" << std::endl;
}
