#include <iostream>

int main()
{
	int t;
	std::cin >> t;
	int count = 0;
	while (t--)
	{
		std::string s;
		std::cin >> s;
		if (s[1] == '-') count--;
		else count++;
	}
	std::cout << count << std::endl;
	return 0;
}
