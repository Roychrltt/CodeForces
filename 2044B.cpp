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
		for (int i = s.length() - 1; i >= 0; i--) {
			if (s[i] == 'q')
				std::cout << 'p';
			else if (s[i] == 'p')
				std::cout << 'q';
			else std::cout << 'w';
		}
		std::cout << std::endl;
	}
	return 0;
}
