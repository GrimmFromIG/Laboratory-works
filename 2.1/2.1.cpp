/*
* Done by
* Student name : Bohdan Petroshchuk
* Student group : 121
* Variant : 12
* Lab. 2.1
*/

#include <iostream>
#include <string>

int main()
{
	float Array1[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	for (int i = 0; i < sizeof(Array1) / sizeof(Array1[0]); i++)
	{
		if (i % 2 != 0)
		{
			Array1[i] = 15.68 - 3 * i;
		}
		else if (i % 2 == 0)
		{
			Array1[i] = 15.68 + 3 * i;
		}
	}
	for (int i = 0; i < sizeof(Array1)/ sizeof(Array1[1]) - 1; i++)
	{
		for (int j = 0; j < sizeof(Array1)/ sizeof(Array1[1]) - i - 1; j++)
		{
			if (Array1[j] > Array1[j + 1])
			{
			float temp = Array1[j];
			Array1[j] = Array1[j + 1];
			Array1[j + 1] = temp;
			}
		}
	}
	return 0;
}