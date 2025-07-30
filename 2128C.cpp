#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	int n;
	std::cin >> n;
	std::vector<int> v(n), pre(n), suf(n);
	for (int i = 0; i < n; i++)
		std::cin >> v[i];
	pre[0] = v[0];
	suf[n - 1] = v[n - 1];
	for (int i = 1; i < n; i++)
		pre[i] = std::min(v[i], pre[i - 1]);
	for (int i = n - 2; i >= 0; i--)
		suf[i] = std::max(suf[i + 1], v[i]);
	for (int i = 0; i < n; i++)
	{
		if (pre[i] * 2 <= suf[i])
		{
			std::cout << "NO" << std::endl;
			return;
		}
	}
	std::cout << "YES" << std::endl;
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
