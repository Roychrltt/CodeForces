#include <bits/stdc++.h>

static void solve(void)
{
	std::string s;
	std::cin >> s;
	int n = s.length();
	int count = 0;;
	for (int i = 0; i < n; i++) {
		if ((s[i] - '0') % 2 == 0)
			count++;
	}
	if (count == 0)
		std::cout << -1 << std::endl;
	else if ((s[n - 1] - '0') % 2 == 0)
		std::cout << 0 << std::endl;
	else if ((s[0] - '0') % 2 == 0)
		std::cout << 1 << std::endl;
	else
		std::cout << 2 << std::endl;
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
