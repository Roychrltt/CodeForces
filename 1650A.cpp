#include <bits/stdc++.h>

static void solve()
{
	std::string s;
	std::cin >> s;
	char c;
	std::cin >> c;
	for (int i = 0; i < s.length(); i += 2) {
		if (s[i] == c)
		{
			std::cout << "YES" << std::endl;
			return;
		}
	}
	std::cout << "NO" << std::endl;
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
