#include <bits/stdc++.h>

static void solve(void)
{
	int n;
	std::cin >> n;
	int prev;
	std::cin >> prev;
	bool check = true;
	for (int i = 0; i < n - 1; i++) {
		int x;
		std::cin >> x;
		if (std::abs(x - prev) != 5 && std::abs(x - prev) != 7)
			check = false;
		prev = x;
	}
	std::cout << (check ? "YES" : "NO") << std::endl;
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
