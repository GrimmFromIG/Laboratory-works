/*
* Done by
* Student name : Bohdan Petroshchuk
* Student group : 121
* Variant : 12
* Lab. 2.3.Task1
*/

#include <iostream>
#include <locale>
#include <Windows.h>

const int enqueue = 8; 
const int dequeue = 4;
const int ListSize = 10;

struct VectorList
{
    float data[ListSize];
    int last = -1;
};
  
void main()
{
    setlocale(LC_CTYPE, "ukr");
    SetConsoleOutputCP(1251);

    VectorList MyList1;
    int arr[ListSize] = { 1,2,3,4,5,6,7,8,9,10 };
    for (int i = 0; i < enqueue && i < ListSize; i++)
    {
        MyList1.data[i] = arr[i];
        MyList1.last++;
    }
    for (int i = 0; i < dequeue && MyList1.last >= 0; i++)
    {
        MyList1.data[MyList1.last] += 1;
        MyList1.last--;
    }
}