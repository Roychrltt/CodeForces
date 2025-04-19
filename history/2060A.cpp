#include <bits/stdc++.h>

static void solve(void)
{
	int a, b, d, e;
	std::cin >> a >> b >> d >> e;
	int cur = 1;
	if (a + b + b == d) cur++;
	if (a + b + d == e) cur++;
	int ans = cur;
	cur = 1;
	if (a + b == d - b) cur++;
	if (e - d == d - b) cur++;
	ans = std::max(ans, cur);
	cur = 1;
	if (a + b == e - d) cur++;
	if (e - d + b == d) cur++;
	ans = std::max(ans, cur);
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
