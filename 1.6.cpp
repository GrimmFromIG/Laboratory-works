/*
* Done by
* Student name : Bohdan Petroshchuk
* Student group : 121
* Variant : 12
* Lab. 1.6
*/

#include <iostream>
#include <string>

int main()
{
	char Char1 = '8';
	char Char2 = 'C';
	const char ConstChar1 = ',';

	int Int1;
	float Flt1;
	unsigned short UShort1;
	Int1 = 37;
	Flt1 = 95.41;
	UShort1 = 5743;
	
	double Dbl1;
	int Int2;
	char Char3;
	Dbl1 = Int1;//неявне приведення типів
	Int2 = (int)Flt1;//явне приведення типів
	
	return 0;
}