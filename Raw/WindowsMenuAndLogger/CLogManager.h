#pragma once

class ILogTarget;

class CLogManager 
{
public:
	CLogManager();
	~CLogManager();

	bool Initialise(const char* _pcIniFilename);
	bool AddLogTarget(ILogTarget * _pLogTarget);
	bool ReamoveLogTarget(ILogTarget* _pLogTarget);
	void Write(const char* _pcMessage);
	void WriteLine(const char* _pcMessage);
};


