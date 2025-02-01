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
		int n = s.length();
		if (n & 1)
		{
			std::cout << "NO" << std::endl;
			continue;
		}
		int count = 0;
		for (char c : s)
			if (c == 'B') count++;
		if (count == n / 2)
			std::cout << "YES" << std::endl;
		else
			std::cout << "NO" << std::endl;
	}
	return 0;
}
