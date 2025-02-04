#include <bits/stdc++.h>

static void solve(void)
{
	int n;
	std::cin >> n;
	for (int i = 0; i < n; i++) {
		std::cout << i * 2 + 1 << " ";
	}
	std::cout << std::endl;
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
