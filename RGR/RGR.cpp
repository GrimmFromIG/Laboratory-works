/*
* Done by
* Student name : Bohdan Petroshchuk
* Student group : 121
* Variant : 21
* RGR
*/

#include <Windows.h>
#include <iostream>
#include <string>

bool isValidLV(const std::string& str)
{
    if (str.empty() || str.front() != '0' || str.back() != '1')
    {
        return false;
    }
    int ExclamationSignPos = str.find('!');
    if (ExclamationSignPos == std::string::npos)
    {
        return false;
    }
    for (int i = 0; i < ExclamationSignPos; ++i)
    {
        if (!isdigit(str[i]))
        {
            return false;
        }
    }
    for (int i = ExclamationSignPos + 1; i < str.length(); ++i) {
        if (!isdigit(str[i]))
        {
            return false;
        }
    }
    return true;
}
int main() 
{
    while (true) 
    {
        std::string UserLine;
        std::cout << "Enter the line: ";
        std::getline(std::cin, UserLine);
        if (isValidLV(UserLine)) {
            std::cout << UserLine << " are element of L(V)" << std::endl;
        }
        else {
            std::cout << UserLine << " are not element of L(V)" << std::endl;
        }
    }
    return 0;
}