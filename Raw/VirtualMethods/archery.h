#pragma once
#include "weapontype.h"
class archery :	public weapontype
{
public:
	archery();
	~archery();
	void DisplayMyType() override;
};

