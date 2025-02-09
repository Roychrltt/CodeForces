#include <bits/stdc++.h>

static void solve(void)
{
	std::string s;
	std::cin >> s;
	int len = s.length();
	for (int i = 0; i < len - 1; i++) {
		if (s[i] == s[i + 1])
		{
			{
				std::cout << 1 << std::endl;
				return;
			}
		}
	}
	std::cout << len << std::endl;
}

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
	int t;
	std::cin >> t;
	while (t--)
	{
		solve();
	}
	return 0;
}
