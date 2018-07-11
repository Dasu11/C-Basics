#include <iostream>
#include <conio.h>

int maindddd() 
{

	double iFirstInput = -1;
	double iSecondInput = -1;
	double iThirdInput = -1;

	do
	{
		std::cout << "Please give in a lower limit, limit >0 : ";
		std::cin >> iFirstInput;
		std::cout << std::endl;
	} while (iFirstInput <= 0);

	do
	{
		std::cout << "Please give in a higher limit, < limit <= 50000 : ";
		std::cin >> iSecondInput;
		std::cout << std::endl;
	} while (iSecondInput > 50000);

	do
	{
		std::cout << "Please give in a step < limit <= 10 : ";
		std::cin >> iThirdInput;
		std::cout << '\n';
	} while (iThirdInput > 10);

	std::cout << "Celsius                Fahrenheit" << std::endl;
	std::cout << "-------                ----------" << std ::endl;

	int result = 0;
	while (iFirstInput < iSecondInput)
	{
		std::cout << iFirstInput <<"                        "<< ((iFirstInput*1.8f)+32) << std::endl;
		iFirstInput += iThirdInput;
	}

	_getch();
	return 0;
}