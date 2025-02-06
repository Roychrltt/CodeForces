#include <bits/stdc++.h>

static void solve(void)
{
	long long int n;
	std::cin >> n;
	long long int a;
	std::cin >> a;
	long long int b;
	long long int ans = 0;
	for (int i = 1; i < n; i++) {
		std::cin >> b;
		ans = std::max(ans, a * b);
		a = b;
	}
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
