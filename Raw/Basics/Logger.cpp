#include <iostream>
#include <Windows.h>
#include <fstream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;
string sLogFileName = "Logger.txt";
struct Logger 
{

	template <typename D>
	static void Log(D val);
};
int Loggermain() 
{
	Logger::Log(50);
	Logger::Log("Das");


	system("pause");
	return 0;
}

template <typename D>
static void Logger::Log(D data)
{
	ofstream outFile;
	outFile.open(sLogFileName, ios::app);
	outFile << data << endl;
	outFile.close();
}