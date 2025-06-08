#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	int n;
	std::cin >> n;
	std::vector<int> a(n), b(n);
	std::map<int, int> c, d;
	for (int i = 0; i < n; i++)
		std::cin >> a[i];
	for (int i = 0; i < n; i++)
		std::cin >> b[i];
	if (a[n - 1] == b[n - 1])
	{
		std::cout << n << std::endl;
		return;
	}
	c[a[n - 1]]++;
	d[b[n - 1]]++;
	for (int i = n - 2; i >= 0; i--)
	{
		if ((n - i - 1) & 1)
		{
			if (a[i] == b[i] || c[a[i]] > 0 || d[b[i]] > 0 || d[a[i]] - (b[i + 1] == a[i]) > 0 || c[b[i]] - (a[i + 1] == b[i]) > 0)
			{
				std::cout << i + 1 << std::endl;
				return;
			}
			d[a[i]]++;
			c[b[i]]++;
		}
		else
		{
			if (a[i] == b[i] || d[a[i]] > 0 || c[b[i]] > 0 || c[a[i]] - (b[i + 1] == a[i]) > 0 || d[b[i]] - (a[i + 1] == b[i]) > 0)
			{
				std::cout << i + 1 << std::endl;
				return;
			}
			c[a[i]]++;
			d[b[i]]++;
		}
	}
	std::cout << 0 << std::endl;
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
