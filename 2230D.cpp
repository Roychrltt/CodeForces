#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	int n;
	std::cin >> n;
	std::vector<int> a(n), b(n);
	for (auto &x : a) std::cin >> x, --x;
	for (auto &x : b) std::cin >> x, --x;
	std::vector<int> pa(n + 1, n), pb(n + 1, n), dp(n + 1, n);
	long long ans = 0;
	for (int i = n - 1; i >= 0; --i) {
		pa[a[i]] = i;
		pb[b[i]] = i;
		if (a[i] == b[i]) {
			int x = a[i] + 1;
			if (pa[x] == pb[x]) dp[i] = dp[pa[x]];
			else dp[i] = std::min(pa[x], pb[x]);
		}
		if (pa[0] != pb[0]) ans += std::min(pa[0], pb[0]) - i;
		else ans += dp[pa[0]] - i;
	}
	std::cout << ans << '\n';	
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
	__Made in France__
}
