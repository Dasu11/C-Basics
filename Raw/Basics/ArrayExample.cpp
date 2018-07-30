//#include <iostream>
//#include <conio.h>
//int main() 
//{
//	/*const int iSecond = 3;
//	const int iThird = 4;
//	char sMeraString[2][iSecond][iThird] = {
//		{ { 'D','D','D','D' },{ 'D','D','D','D' },{ 'D','D','D','D' } },
//		{ { 'D','D','D','D' },{ 'D','D','D','D' },{ 'D','D','D','D' } }
//	};
//	int i = 0;
//	for ( i = 0; i < sizeof(sMeraString) / iSecond; i++)
//	{
//		std::cout << sMeraString[i] <<std::endl;
//	}*/
//
//	int AmatrixOne[3][2] = { 1,2,3,4,5,6 };
//	int AmatrixTwo[2][3] = { 6,5,4,3,2,1 };
//
//	int i = 0;
//	int j = 0;
//	std::cout << "Matrix One" << std::endl;
//	for ( i = 0; i < 2; i++)
//	{
//		 j = 0;
//		for (j = 0; j < 3; j++)
//		{
//			std::cout << AmatrixOne[i][j];
//		}
//		std::cout << std::endl;
//	}
//
//	std::cout << "Matrix Two" << std::endl;
//	for (i = 0; i < 2; i++)
//	{
//		 j = 0;
//		for (j = 0; j < 3; j++)
//		{
//			std::cout << AmatrixTwo[i][j];
//		}
//		std::cout << std::endl;
//	}
//	int AresultMatrix[3][3] = {0,0,0,0,0,0,0,0,0};
//	i = 0;
//	j = 0;
//	int k = 0;
//	int iAddValue = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 2; j++) 
//		{
//			for (k = 0; k < 2; k++)
//			{
//				//iAddValue
//				AresultMatrix[i][j] += AmatrixOne[i][k] * AmatrixTwo[k][j];
//			}
//		}
//	}
//
//
//	int a = 0;
//	std::cin >> a;
//	
//}