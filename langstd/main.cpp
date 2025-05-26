#include <iostream>

const int numstds = 7;
const long stdCode[numstds] = { 199711L, 201103L, 201402L, 201703L, 202002L, 202302L, 202612L};
const std::string stdName[numstds] = { "Pre-C++11", "C++11", "C++14", "C++17", "C++20", "C++23", "C++26"};

int main()
{
    long standard = __cplusplus;

    if (standard == -1)
    {
        std::cout << "Error: The compiler doesn't know the language standard either.\n";
        return 0;
    }

    for (int i = 0; i < numstds; ++i)
    {
        // If the reported version is equal to a finalized standard code we know the exact standard.
        if (standard == stdCode[i])
        {
            std::cout << "Compiler is using " << stdName[i] << " (language standard code " << standard << "L)\n";
            break;
        }

        // If the reported version is between two finalized standard codes this must be a preview or experimental support version.
        if (standard < stdCode[i])
        {
            std::cout << "Compiler is using a preview/pre-release of " << stdName[i] << " (language standard code " << standard << "L)\n";
            break;
        }
    }
    return 0;
}
