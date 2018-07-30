#include <iostream>
#include <Windows.h>

#pragma region Patterns
//Pattern 1
//1
//1 2
//1 2 3
//1 2 3 4
//1 2 3 4 5

//Pattern 2
//* * * * *
//* * * *
//* * *
//* *
//*

//Pattern3
//        *
//      * * *
//    * * * * *
//  * * * * * * *
//* * * * * * * * *
#pragma endregion
int mainfd() 
{
//#pragma region Pattern1
//	int i = 1;
//	int j = 1;
//	while(i != 6)
//	{
//		for ( j = 1; j <= i; j++)
//			std::cout << j << " ";
//
//		std::cout << std::endl;
//		i++;
//	}
//#pragma endregion

//#pragma region Pattern2
//	int i = 5;
//	int j = 0;
//	do
//	{
//		for ( j = i; j > 0; j--)
//			std::cout << "*" << " ";
//
//		std::cout << std::endl;
//		i--;
//	} while (i != 0);
//
//#pragma endregion

#pragma region Pattern3
	int i = 9;
	int j = 0;
	do
	{
		for ( j = i; j > 0; j--)
			std::cout << "*" << " ";

		std::cout << std::endl;
		i--;
	} while (i != 0);

#pragma endregion

	system("pause");
	return 0;
}

//
//int main()
//{
//
//
//
//
//	system("pause");
//	return 0;
//}