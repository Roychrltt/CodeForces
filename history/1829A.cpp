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
		std::string c = "codeforces";
		int count = 0;
		for (int i = 0; i < 10; i++) {
			if (s[i] != c[i])
				count++;
		}
		std::cout << count << std::endl;
	}
	return 0;
}
