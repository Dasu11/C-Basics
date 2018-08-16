#pragma once
#include "ILogTarget.h"
class CLogCommandPrompt :
	public ILogTarget
{
public:
	CLogCommandPrompt();
	~CLogCommandPrompt();

	bool Initialise(const char* _pcIniFilename);
	void Write(const char* _pcMessage);
};

