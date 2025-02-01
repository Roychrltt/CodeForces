#include <iostream>
#include <string>

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
	int t;
	std::cin >> t;
	while (t--)
	{
		std::string s;
		std::cin >> s;
		int len = s.length();
		int m = 0;
		for (int i = 0; i < len; i++) {
			if (s[i] < s[0]) break;
			else if (s[i] > s[0] || i == len - 1)
				m = 1;
		}
		std::cout << (len - 1) * 9 + s[0] - '0' - 1 + m << std::endl;
	}
	return 0;
}
