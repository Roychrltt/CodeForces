#include <bits/stdc++.h>

static void solve(void)
{
	std::string s;
	std::cin >> s;
	int n = s.length();
	std::cout << s[0] - '0' + (n - 1) * 9 << std::endl;
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
