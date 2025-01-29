#include <iostream>

int main()
{
	int t;
	std::cin >> t;
	while (t--)
	{
		std::string s;
		std::cin >> s;
		int len = s.length();
		if (len <= 10)
			std::cout << s << std::endl;
		else
			std::cout << s[0] << len - 2 << s[len - 1] << std::endl;
	}
	return 0;
}
