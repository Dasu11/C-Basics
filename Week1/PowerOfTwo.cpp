#include <iostream>
#include <Windows.h>

int main()
{
	int iInput = 0;
	std::cout << "Please enter a number : ";
	std::cin >> iInput;
	
	bool bIsPowerOfTwo = true;

	while (iInput != 1)
	{
		if (iInput % 2 != 0) {
			bIsPowerOfTwo = false;
			break;
		}
		iInput /= 2;
	} //mistake 
	if (bIsPowerOfTwo)
		std::cout << "Entered number is power of two";
	else
		std::cout << "Entered number is not power of two";

	std::cout << std::endl;
	system("pause");
	return 0;
}