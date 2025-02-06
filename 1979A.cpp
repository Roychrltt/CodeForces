#include <bits/stdc++.h>

static void solve(void)
{
	int n;
	std::cin >> n;
	int a;
	std::cin >> a;
	int b;
	int ans = std::numeric_limits<int>::max();;
	for (int i = 1; i < n; i++) {
		std::cin >> b;
		int c = std::max(a, b);
		ans = std::min(ans, c);
		a = b;
	}
	std::cout << ans - 1 << std::endl;
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
