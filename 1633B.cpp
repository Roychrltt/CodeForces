#include <bits/stdc++.h>

static void solve(void)
{
	std::string s;
	std::cin >> s;
	int count = 0;
	int n = s.length();
	for (int i = 0; i < n; i++) {
		if (s[i] == '0') count++;
	}
	if ((n & 1))
		std::cout << std::min(count, n - count) << std::endl;
	else if (count != n / 2)
		std::cout << std::min(count, n - count) << std::endl;
	else
		std::cout << n / 2 - 1 << std::endl;
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
