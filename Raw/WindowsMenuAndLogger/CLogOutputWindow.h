#pragma once
#include "ILogTarget.h"
class CLogOutputWindow :
	public ILogTarget
{
public:
	CLogOutputWindow();
	~CLogOutputWindow();

	bool Initialise(const char* _pcIniFilename);
	void Write(const char* _pcMessage);
};

