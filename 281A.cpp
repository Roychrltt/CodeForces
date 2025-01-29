#include <iostream>
#include <string>
#include <cctype>

int main()
{
	std::string s;
	std::cin >> s;
	if (s[0] >= 'a') s[0] -= 'a' - 'A';
	std::cout << s << std::endl;
	return 0;
}
