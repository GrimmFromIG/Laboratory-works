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
	//Завдання 1
	float FloatArray1[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	for (int i = 0; i < sizeof(FloatArray1) / sizeof(FloatArray1[0]); i++)
	{
		if (i % 2 != 0)
		{
			FloatArray1[i] = 15.68 - 3 * i;
		}
		else if (i % 2 == 0)
		{
			FloatArray1[i] = 15.68 + 3 * i;
		}
	}
	for (int i = 0; i < sizeof(FloatArray1) / sizeof(FloatArray1[1]) - 1; i++)
	{
		for (int j = 0; j < sizeof(FloatArray1) / sizeof(FloatArray1[1]) - i - 1; j++)
		{
			if (FloatArray1[j] < FloatArray1[j + 1])
			{
				float temp = FloatArray1[j];
				FloatArray1[j] = FloatArray1[j + 1];
				FloatArray1[j + 1] = temp;
			}
		}
	}
	//Завдання 2
	int IntArray1[10];
	int IntArray2[10];
	int IntArray3[10];

	for (int i = 0; i < sizeof(IntArray1) / sizeof(IntArray1[0]); i++)
	{
		IntArray1[i] = 95 + i;
	}
	for (int i = 0; i < sizeof(IntArray2) / sizeof(IntArray2[0]); i++)
	{
		IntArray2[i] = 105 - i;
	}
	int k = 0;
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (IntArray1[i] == IntArray2[j])
			{
				IntArray3[k] = IntArray1[i];
				k++;
				break;
			}
		}
	}
	int SumOfArray3 = 0;
	for (int i = 0; i < k; i++)
	{
		if (IntArray3[i] > 101)
		SumOfArray3 += IntArray3[i];
	}

	return 0;
}