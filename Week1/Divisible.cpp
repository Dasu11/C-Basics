#include <iostream>
#include <Windows.h>
#include <conio.h>

int main() 
{
	int iInput = 0;
	char *cResult = nullptr;
	std::cout << "Please enter a number to check if it is divisible by 3 or 5 or both : ";
	std::cin >>  iInput;
	std::cout << std::endl;

	bool bIsDivisibleByThree = false;
	if (iInput % 3 == 0) {
		cResult = "Shivaji";
		bIsDivisibleByThree = true;
	}
	if (iInput % 5 == 0)
	{
		if (bIsDivisibleByThree)
			cResult = "Shivaji Maharaj Ki Jai";
		else
			cResult = "Maharaj";
	}

	if(cResult !=nullptr)
		std::cout << cResult;

	std::cout << std::endl;
	system("pause");
	return 0;
}