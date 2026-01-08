#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	int n, k;
	std::cin >> n >> k;
	std::vector<int> v(n + 2);
	for (int i = 0; i < n; i++)
	{
		int x;
		std::cin >> x;
		v[x]++;
	}
	int ans = 0;
	while (ans < k - 1 && v[ans]) ans++;
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
	__Made in France__
}
