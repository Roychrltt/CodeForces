#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	int n;
	std::cin >> n;
	std::vector<int> v(n), pre(n);
	for (int i = 0; i < n; i++)
		std::cin >> v[i];
	pre[0] = v[0];
	for (int i = 1; i < n; i++)
		pre[i] = std::max(v[i], pre[i - 1]);
	int cnt = 0;
	for (int i = n - 1; i > 0; i--)
	{
		if (i & 1) v[i] = pre[i];
		else continue;
		if (i < n - 1)
		{
			if (v[i + 1] >= v[i])
			{
				int d = v[i + 1] - v[i] + 1;
				cnt += d;
				v[i + 1] -= d;
			}
		}
		if (v[i - 1] >= v[i])
		{
			int d = v[i - 1] - v[i] + 1;
			cnt += d;
			v[i - 1] -= d;
		}
	}
	std::cout << cnt << std::endl;
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
