#include <bits/stdc++.h>

static void solve(void)
{
	int n;
	std::cin >> n;
	long long int a = std::numeric_limits<int>::max(), b = std::numeric_limits<int>::max(), c = std::numeric_limits<int>::max();
	for (int i = 0; i < n; i++) {
		long long int x;
		std::cin >> x;
		std::string s;
		std::cin >> s;
		if (s == "01") a = std::min(a, x);
		else if (s == "10") b = std::min(b, x);
		else if (s == "11") c = std::min(c, x);
	}
	if ((a > 1e6 || b > 1e6) && c > 1e6)
		std::cout << -1 << std::endl;
	else
		std::cout << std::min(a + b, c) << std::endl;
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
