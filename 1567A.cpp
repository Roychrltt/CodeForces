#include <bits/stdc++.h>

static void solve(void)
{
	int n;
	std::cin >> n;
	std::string s;
	std::cin >> s;
	for (int i = 0; i < n; i++) {
		if (s[i] == 'D') s[i] = 'U';
		else if (s[i] == 'U') s[i] = 'D';
	}
	std::cout << s << std::endl;
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
