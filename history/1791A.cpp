#include <iostream>
#include <string>

int main()
{
	int t;
	std::cin >> t;
	while (t--)
	{
		char c;
		std::cin >> c;
		std::string s = "codeforces";
		if (s.find(c) != std::string::npos)
			std::cout << "YES" << std::endl;
		else
			std::cout << "NO" << std::endl;
	}
	return 0;
}
