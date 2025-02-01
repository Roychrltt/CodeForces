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
		std::vector<std::string> v(8);
		for (int i = 0; i < 8; i++) {
			std::cin >> v[i];
		}
		std::string s = "";
		for (int i = 0; i < 8; i++) {
			for (int j = 0; j < 8; j++) {
				if (v[i][j] != '.')
					s += v[i][j];
			}
		}
		std::cout << s << std::endl;
	}
	return 0;
}
