#include "CEnemy.h"
#include <iostream>
#include <String>

CEnemy::CEnemy()
{
	//SetName(cName);
	//SetHp(iHps);
	//SetXp(iXps);
	SetName("Default");
}

CEnemy::CEnemy(const char* cName, int iHP, int iXP)
{
	SetName(cName);
	SetHp(iHP);
	SetXp(iXP);
}

CEnemy::~CEnemy()
{
}

void CEnemy::Attack() {}

void CEnemy::SetName(const char* cName) 
{
	//m_Name = cName; 
	strncpy_s(m_Name, cName, g_kiMaxChars-1);
}

const char* CEnemy::GetName()const
{
	return m_Name;
}

void CEnemy::SetHp(int iNewHp) 
{
	m_iHp = iNewHp;
}

int CEnemy::GetHp()const 
{
	return m_iHp;
}

void CEnemy::SetXp(int iNewXp)
{
	m_iXp = iNewXp;
}

int CEnemy::GetXp()const
{
	return m_iXp;
}

void CEnemy::Type() 
{

}

