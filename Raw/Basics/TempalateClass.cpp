//#include <iostream>
//#include <conio.h>
//#include <assert.h>
//#include <Windows.h>
//
//using namespace std;
//
//template <typename D>
//struct MyStructure
//{
//	D a;
//	D b;
//	D *c;
//
//	//constructors
//	MyStructure()
//	{
//		a = 10;
//		b = 20;
//		c = new D();
//
//	}
//
//	MyStructure(D _a, D _b)
//	{
//		a = _a;
//		b = _b;
//	}
//
//	//destructors
//
//	~MyStructure()
//	{
//
//		if (c != nullptr)
//		{
//			delete c;
//			c = 0;
//		}
//	}
//
//};
//
//int main()
//{
//	MyStructure<int> *pStruct = new MyStructure<int>();
//	MyStructure<int>& rStruct = *pStruct;
//
//	if (pStruct != nullptr)
//	{
//		delete pStruct;
//		pStruct = 0;
//	}
//
//	system("pause");
//	return 0;
//}
//
//
//
