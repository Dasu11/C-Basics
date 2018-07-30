#include <iostream>
#include <conio.h>
#include <assert.h>
#include <Windows.h>

using namespace std;

template <typename D>
D* Multiplier(D* a, D* b)
{
	/*cout << a << endl;
	cout << &(*a) << endl;*/

	D d = (*a * *b); // cannot return directly using expression;
	return &d; //return address of result;
}

template <typename F>
F& Multiplier(F& a, F& b)
{
	//cout << a << endl;

	F f = a*b;
	return f;
}

int mainkj() 
{
	int a = 2, b = 2;
	float x = 2.1,y= 2.1;

	// * value of returned 
	cout << *(Multiplier(&a, &b)) << endl;
	cout << *(Multiplier(&x, &y)) << endl;

	cout << endl;

	cout << Multiplier(a, b) << endl;
	cout << Multiplier(x, y) << endl;

	system("pause");
	return 0;
}

