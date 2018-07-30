#include <iostream>
#include <cstring>
#include <ctype.h>
#include <Windows.h>
#include <conio.h>
//
//int main() 
//{
//
//	char cMitul[] = "mitul";
//	char cConst[] = "esh";
//	char cResult[10] = "";
//	char cUpperResult[10] = "";
//
//	strncpy_s(cResult, cMitul, 3);
//
//	strcat_s(cResult,cConst);
//
//	strncpy_s(cUpperResult, cResult,sizeof(cResult));
//
//	_strupr_s(cUpperResult);
//
//	std::cout << cUpperResult << std ::endl;
//
//	int i = 0;
//	char c;
//	while (cMitul[i])
//	{
//		c = cMitul[i];
//		std::cout << toupper(c);
//		i++;
//	}
//
//	int a = 0;
//	std::cin >> a;
//}

struct MyStruct
{
	int a;
	float b;
	char c;
};

int maingghhg()
{
	MyStruct  _mystruct;
	std::cout << sizeof(_mystruct);

	system("pause");
	_getch();
	return 0;
}