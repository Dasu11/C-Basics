#pragma once
#include "ILogTarget.h"
class CLogFile :
	public ILogTarget
{
public:
	CLogFile();
	~CLogFile();

	bool Initialise(const char* _pcIniFilename);
	//void Write(const char* _pcMessage)override;
};

