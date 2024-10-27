/*
* Done by
* Student name : Bohdan Petroshchuk
* Student group : 121
* Variant : 12
* Lab. 2.4
*/

#include <iostream>
#include <locale>
#include <Windows.h>
#include <cmath>

double calculateY(double x)
{
    if (x < 0)
    {
        return 4 * std::pow(x, 2) + 2;
    }
    else {
        double prod = 1.0;
        for (int i = 1; i <= 5; ++i)
        {
            prod *= std::pow(x, 2) / (i + 1);
        }
        return x + prod;
    }
}

int main()
{
    setlocale(LC_CTYPE, "ukr"); SetConsoleOutputCP(1251);

    double x;
    std::cout << "Enter x value: ";
    std::cin >> x;
    while (x < -5 || x > 4)
    {
        std::cout << "x must be in range of [-5, 4], please enter valid x value:" << std::endl;
        std::cin >> x;
    }
    double y = calculateY(x);
    std::cout << "y = " << y << std::endl;

    return 0;
}