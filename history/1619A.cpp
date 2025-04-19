#include <bits/stdc++.h>

static void solve(void)
{
	std::string s;
	std::cin >> s;
	int len = s.length();
	if (len & 1)
	{
		std::cout << "NO" << std::endl;
		return;
	}
	for (int i = 0; i < len / 2; i++) {
		if (s[i] != s[i + len / 2])
		{
			std::cout << "NO" << std::endl;
			return;
		}
	}
	std::cout << "YES" << std::endl;
	return;
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
