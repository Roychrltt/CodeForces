#include <bits/stdc++.h>

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
		std::cout << s[0] << s[1];
		int len = s.length();
		int i = 3;
		while (i < len)
		{
			std::cout << s[i];
			i += 2;
		}
		std::cout << std::endl;
	}
	return 0;
}
