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
#include <regex>

bool isValidLV(const std::string& str) 
{
    // Regular expression pattern for the language L(V)
    const std::regex pattern(R"(0[0-9]*![0-9]*1)");
    return std::regex_match(str, pattern);
}

int main() {
    char16_t elementOf = u'\u2208';
    std::string testStrings[] = { "0567!378781", "0!1", "0567378781", "0567!37878" };
    for (const auto& str : testStrings)
    {
        if (isValidLV(str)) {
            std::cout << str << " are element L(V)" << std::endl;
        }
        else {
            std::cout << str << " are not element of L(V)" << std::endl;
        }
    }

    return 0;
}