#include <iostream>
#include <string>
#include <regex>

bool isValidLV(const std::string& str) 
{
    const std::regex pattern(R"(\$[A-F0-9]+:\$[A-F0-9]+)");
    return std::regex_match(str, pattern);
}

int main()
{
    std::string testStrings[] = { "$CDF:$567", "$CDF:$AAA", "$CDF:$A88", "$:SAAA" };

    for (const auto& str : testStrings) 
    {
        if (isValidLV(str)) 
        {
            std::cout << str << " ∈ L(V)" << std::endl;
        }
        else 
        {
            std::cout << str << " ∉ L(V)" << std::endl;
        }
    }
    return 0;
}