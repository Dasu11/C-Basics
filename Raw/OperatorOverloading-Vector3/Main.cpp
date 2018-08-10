#include <iostream>

#include "CCounter.h"

using namespace std;

int main() 
{
	CCounter itest;

	cout << "Value at first : " << itest.GetValue() << endl;

	++itest;

	cout << "Value at second : " << itest.GetValue() << endl;

	system("pause");

	return 0;

}