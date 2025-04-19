#include <iostream>
#include <algorithm>
#include <string>
#include <cctype>

int main()
{
    std::string s1, s2;
    std::cin >> s1 >> s2;

    std::transform(s1.begin(), s1.end(), s1.begin(), [](unsigned char c) { return std::toupper(c); });
    std::transform(s2.begin(), s2.end(), s2.begin(), [](unsigned char c) { return std::toupper(c); });

    if (s1 > s2)
        std::cout << 1 << std::endl;
    else if (s1 < s2)
        std::cout << -1 << std::endl;
    else
        std::cout << 0 << std::endl;

    return 0;
}
