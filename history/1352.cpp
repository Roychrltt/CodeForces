#include <bits/stdc++.h>

int main()
{
	int t;
	std::cin >> t;
	while (t--)
	{
		int res = 0;
		int count = 0;
		std::string s;
		std::cin >> s;
		int len = s.length();
		for (int i = 0; i < len; i++) {
			if (s[i] - '0')
				count++;
		}
		std::cout << count << std::endl;
		for (int i = 0; i < len; i++) {
			if (s[i] - '0')
				std::cout << (s[i] - '0') * std::pow(10, len - 1 - i) << " ";
		}
		std::cout << std::endl;
	}
	return 0;
}
