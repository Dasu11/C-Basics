#pragma once
class ILogTarget
{
public:
	virtual void Write(const char* _pcMessage);
};

