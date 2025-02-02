#include <bits/stdc++.h>

static void solve(void)
{
	std::string s;
	std::cin >> s;
	for (int i = 1; i < s.length(); i++) {
		if (s[i] != s[0])
		{
			std::swap(s[i], s[0]);
			std::cout << "YES" << std::endl;
			std::cout << s << std::endl;
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
