#include <bits/stdc++.h>

static void solve(void)
{
	int n, a, b, c;
	std::cin >> n >> a >> b >> c;
	int ans = n / (a + b + c) * 3;
	if (n % (a + b + c) > a + b) ans += 3;
	else if (n % (a + b + c) > a) ans += 2;
	else if (n % (a + b + c) > 0) ans++;
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
