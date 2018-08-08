#pragma once
#include "weapontype.h"
class melee :
	public weapontype
{
public:
	melee();
	~melee();
	void DisplayMyType() override;
};

