#pragma once
#include "CEnemy.h"
class CWerewolf :
	public CEnemy
{
public:

	CWerewolf();
	CWerewolf(const char* cName, int iHps, int iXps);
	~CWerewolf();

	void Attack()override;
	void SetBiteDamage(int iNewDamage);
	int GetBiteDamage() const;

	void Type();

private:
	int m_iBiteDamage;
};

