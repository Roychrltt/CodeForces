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
		std::vector<std::string> v(3);
		for (int i = 0; i < 3; i++) {
			std::cin >> v[i];
		}
		char c = 'A';
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				if (v[i][j] != '?') continue;
				int x = v[i][0] + v[i][1] + v[i][2] - '?' - 'A' - 'A';
				if (x == 1) c = 'C';
				else if (x == 2) c = 'B';
				else c = 'A';
			}
		}
		std::cout << c << std::endl;
	}
	return 0;
}
