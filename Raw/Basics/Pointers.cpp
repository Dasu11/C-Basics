#include <iostream>
#include <conio.h>
#include <cstring>
char c[11];
//int main() 
//{
//
//	//int a = 10;
//	//int *p = &a;
//	//
//	//std::cout << &p<<"\n";
//	//std::cout << &a<<"\n";
//	//std::cout << *(*(&p));
//	//void printVal(char arr[]);
//
//	//int c = 10; // create new address block
//	//int &d = c; // d variable ka address same as c
//	//d = 20; // d ka value means c ka 
//
//	//int a = 50; // firse create new address block
//	//int *z = &a;// 
//	//d = *z;
//
//	//int az = 32, *ptr = &az;
//	//char ch = 'A', &cho = ch;
//
//	//cho += az;
//	//*ptr += ch;
//	//std::cout << az <<","<<ch<<std::endl;
//
//	//std::cout <<"Address of c : "<< &c << std::endl;
//	//std::cout << "Address od d : " << &d << std::endl;
//	//std::cout << "Address of a : " << &a << std::endl;
//	//std::cout << "Value of d : " << d << std::endl;
//	//std::cout << "Address of d : " << &d << std::endl;
//	//std::cout << "Value of c : " << c << std::endl;
//
//	//std::cout << "Value of z : " << *z << std::endl; //?
//	//std::cout << "Address of z : " << z << std::endl; //?
//	//std::cout << "Value of z : " << &z << std::endl;//?
//
//	//---------------------------------------------
//	//int aArr[] = { 1,2,3,4,5 };
//	//int *pArr = aArr;
//
//	//for (int i = 0; i < sizeof(aArr) / sizeof(int); i++)
//	//	std::cout << &(*(pArr + i)) << "\n";
//
//	/*char *getstate(const char*);
//	void getstate(char &p);
//
//
//	 char cName[] = "Solapur,Maharashtra";*/
//
//	//char *cResult = getstate(cName);
//
//	//int i = 0;
//	//do
//	//{
//	//	std::cout << *(cResult + i)<<std::endl;
//	//	i += sizeof(char);
//	//} while (*(cResult + i) != '\0');
//
//	/*	getstate(cName[0]);
//		std::cout << cName;*/
//
//	//bool bCanPrintNow = false;
//	//for (int i = 0; i < sizeof(cName) / sizeof(char); i++) {
//	//	if (*(cName + i) == ',') 
//	//	{
//	//		bCanPrintNow = true;
//	//		continue;
//	//	}
//
//	//	if(bCanPrintNow)
//	//		std::cout << *(cName + i);
//	//}
//
//	/*_getch();
//	return 0;*/
//}

void getstate(char &p)
{
	char &t = p;
	int i = 0;
	int j = 0;
	bool bCanPrintNow = false;
	//do 
	//{
	//	std::cout << &p + i;
	//	i++;
	//} while (&p+i != '\0');
	do
	{
		//std::cout << *(p+i);
		if (*(&p + i) == ',') {
			bCanPrintNow = true;
			i += sizeof(char);
			continue;
		}

		if (bCanPrintNow) {
			*(&t + j) = *(&p + i);
			j += sizeof(char);
		}
		i += sizeof(char);

	} while (*(&p + i) != '\0');
	*(&t + j) = '\0';
}

char *getstate(const char *p)
{
	//sizeof(p) / sizeof(char)
	
	int i = 0;
	int j = 0;
	bool bCanPrintNow = false;
	do
	{
		//std::cout << *(p+i);
		if (*(p + i) == ',') {
			bCanPrintNow = true;
			i += sizeof(char);
			continue;
		}
		
		if (bCanPrintNow) {
			//std::cout << *(p + i);
			*(c+j) = *(p + i);
			j += sizeof(char);
		}

		i += sizeof(char);
	} while (*(p + i) != '\0');
	return c;
}


