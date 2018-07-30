#include <iostream>
#include <conio.h>

int Adder(int);
int Adder();
void SwapString(char *,char *);
int result = 0;
//int main() 
//{
//	//int iMaxValue = 0;
//	//std::cin >> iMaxValue;
//	//int c = Adder(iMaxValue);
//	//std::cout << c <<std::endl;
//	//std::cout << Adder();
//	//char a[] = "das";
//	//char b[] = "amo";
//	//SwapString(a,b);
//	//std::cout << std::endl;
//	//std::cout << a << std::endl;
//	//std::cout << b << std::endl;
//
//
//	_getch();
//	return 0;
//}


void SwapString(char *cFirstString,char* cSecondString) 
{
	//int i = 0;
	//char *cTempString = cFirstString;
	//do 
	//{

	//	i += sizeof(char);
	//} while (*(cFirstString+i) = '\0')
}

//void SwapString(char& cFirstString , char& cSecondString) 
//{
//	char &TempString = cFirstString;
//	int i = 0;
//		do {
//			std::cout << *(&cFirstString + i);
//			*(&TempString + i) = *(&cFirstString + i);
//			i += sizeof(char);
//		} while (*(&cFirstString+i) !='\0');
//		i = 0;
//		do {
//			std::cout << *(&cSecondString + i);
//			*(&cFirstString + i) = *(&cSecondString + i);
//			i += sizeof(char);
//		} while (*(&cSecondString + i) != '\0');
//		i = 0;
//		do {
//			*(&cSecondString + i) = *(&TempString + i);
//			i += sizeof(char);
//		} while (*(&TempString + i) != '\0');
//}


int Adder(int val) 
{
	while (val>0) 
	{
		//std::cout << val << std::endl;
		result += val;
		return Adder(--val);
	}
	return result;
}

int Adder() 
{
	int iMaxValue = 0;
	std::cin >> iMaxValue;
	int c = Adder(iMaxValue);
	return c;
}

