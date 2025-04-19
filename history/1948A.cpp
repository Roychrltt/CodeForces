#include <bits/stdc++.h>

static void solve(void)
{
	int n;
	std::cin >> n;
	if (n & 1)
		std::cout << "NO" << std::endl;
	else
	{
		std::cout << "YES" << std::endl;
		n /= 2;
		for (int i = 0; i < n; i++) {
			if (i & 1) std::cout << "BB";
			else std::cout << "AA";
		}
		std::cout << std::endl;
	}
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
