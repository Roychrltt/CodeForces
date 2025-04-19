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
		std::string pos;
		std::cin >> pos;
		for (int i = 0; i < 8; i++) {
			if ('a' + i == pos[0]) continue;
			char c = 'a' + i;
			std::cout << c << pos[1] << std::endl;
		}
		for (int i = 0; i < 8; i++) {
			if (i + 1 == pos[1] - '0') continue;

			std::cout << pos[0] << i + 1 << std::endl;
		}
	}
	return 0;
}
