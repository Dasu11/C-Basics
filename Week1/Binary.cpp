#include <iostream>
#include <Windows.h>
#include <conio.h>

int main() 
{
	int iInput = 0;
	char *cResult = nullptr;
	std::cout << "Please enter a number : ";
	std::cin >>  iInput;
	std::cout << std::endl;
	int iArray[] = {0,0,0,0,0,0,0,0};
	int i = 0;
	do 
	{
		iArray[i] = iInput % 2;
		iInput /= 2;
		i++;
	} while (iInput > 0);
	
	int j = 7;
	for (j = 7; j >= 0; j--) {
		std::cout << iArray[j];
	}
		
	std::cout << std::endl;
	system("pause");
	return 0;
}