#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	long long int n, m;
	std::cin >> n >> m;
	int tmp = m;
	if (m < n || m > n * (n + 1) / 2)
	{
		std::cout << -1 << std::endl;
		return;
	}
	if (n == 1)
	{
		std::cout << 1 << std::endl;
		return;
	}
	std::vector<int> vis(n);
	vis[0] = 1;
	long long int idx = n;
	long long int dd = n;
	while (m > dd)
	{
		if (m - idx >= dd)
		{
			m -= idx;
			vis[--idx] = 1;
		}
		else
		{
			vis[m - dd] = 1;
			m = 0;
		}
		dd--;
	}
	int f = n - 1;
	while (f >= 0 && !vis[f]) f--;
	std::cout << f + 1 << std::endl;
	bool ok = false;
	bool flag = (tmp == n * (n + 1) / 2);
	for (int i = n - 1; i >= 0; i--)
	{
		if (vis[i])
		{
			std::cout << i + 1 << " ";
			if (ok && (i > 0 || !flag)) std::cout << "\n" << i + 1 << " ";
			ok = true;
		}
	}
	int d = 0;
	while (d < n && vis[d]) d++;
	for (int i = n - 1; i >= 0; i--)
	{
		if (!vis[i])
		{
			std::cout << i + 1 << "\n";
			if (i != d) std::cout << i + 1 << " ";
			ok = true;
		}
	}
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
