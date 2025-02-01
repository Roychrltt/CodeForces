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
		int n;
		std::cin >> n;
		std::string s;
		std::cin >> s;
		int x = 0, y = 0;
		bool check = false;
		for (int i = 0; i < n; i++) {
			if (s[i] == 'L') x--;
			else if (s[i] == 'R') x++;
			else if (s[i] == 'U') y++;
			else if (s[i] == 'D') y--;
			if (x == 1 && y == 1) check = true;
		}
		std::cout << (check ? "YES" : "NO") << std::endl;
	}
	return 0;
}
