#include <iostream>
#include <conio.h>
#include <assert.h>
#include <Windows.h>

#pragma region CASTING
enum TYPE {
	INTD,
	FLOATD,
	CSTRINGD
};

void function(void* x, TYPE t);

int castmain()
{
	int iValue = 10;
	float fValue = 20;
	char cArray[] = "DAS";

	function(&iValue, INTD);
	function(&fValue, FLOATD);
	function(&cArray, CSTRINGD);

	_getch();
	return 0;
}

void function(void* x, TYPE t)
{
	int *iVal = 0;
	float *fVal = 0;
	char *cArr;
	switch (t)
	{
	case INTD:
		std::cout <<  *static_cast<int*> (x) << '\n';
		break;
	case FLOATD:
		std::cout << *static_cast<float*> (x) << '\n';
		break;
	case CSTRINGD:
		std::cout << *static_cast<char*> (x) << '\n';
		break;
	default:
		break;
	}
}
#pragma endregion

//#pragma region Dynamic
//int main() 
//{
//	const int a = 10;
//	float *p = new float[a];
//
//	for (int i = 0; i < 10; i++)
//	{
//		*(p + i) = static_cast<float> (i);
//		std::cout << *(p + i);
//	}
//
//	if (p != nullptr) {
//		delete[] p;
//		p = 0;
//	}
//
//
//	std::cout << std::endl;
//	system("pause");
//	return 0;
//}
//#pragma endregion

int maind() 
{

//#pragma region 2d 
//	const int a = 4;
//	const int b = 2;
//
//	int **q = new int*[a]; // ??
//
//	//for (int i = 0; i < b; i++)
//	//{
//		for (int j = 0; j < a; j++)
//			q[j] = new int[b];
//
//		for (int i = 0; i < a; i++)
//		{
//			for (int k = 0; k < b; k++)
//			{
//				q[i][k] = i + k;
//				std::cout << q[i][k] << " ";
//			}
//			std::cout << std::endl;
//		}
//		//std::cout << std::endl;
//	//}
//
//		if(*q != nullptr)
//			for (int i = 0; i < a; i++)
//			{
//				delete[] q[i];
//				q[i] = 0;
//			}
//
//#pragma endregion

	int one = 2;
	int two = 2;
	int three = 2;

	int ***q = new int **[one];


	// memory allocate karna  
	for (int i = 0; i < one; i++) {
		q[i] = new int*[two]; // pointer array karna 
		for (int j = 0; j < two; j++) {
			q[i][j] = new int[three];
		}
	}

	// value bharna 
	for (int i = 0; i<one; i++) {
		for (int j = 0; j<two; j++) {
			for (int k = 0; k<three; k++) {
				q[i][j][k] = i+k+j;
				std::cout << q[i][j][k] << "-";
			}
			std::cout << std::endl;
		}
	}


	system("pause");
	return 0;
}