#include <bits/stdc++.h>

static void solve(void)
{
	std::string s;
	std::cin >> s;
	int len = s.length();
	std::string ans = s.substr(0, len - 2);
	ans += "i";
	std::cout << ans << std::endl;
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
