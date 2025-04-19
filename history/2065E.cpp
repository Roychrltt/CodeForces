#include <bits/stdc++.h>

static void solve(void)
{
	int n, m, k;
	std::cin >> n >> m >> k;
	if (k < std::abs(n - m) || k > std::max(n, m))
	{
		std::cout << -1 << std::endl;
		return;
	}
	char c;
	if (n >= m) c = '0';
	else c = '1';
	std::string ans = "";
	ans.append(k, c);
	if (n >= m) n -= k;
	else m -= k;
	if (c == '0')
	{
		for (int i = 0; i < n; i++) {
			ans += "10";
		}
		ans.append(m - n, '1');
	}
	else if (c == '1')
	{
		for (int i = 0; i < m; i++) {
			ans += "01";
		}
		ans.append(n - m, '0');
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
