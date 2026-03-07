#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	int n, m;
	std::cin >> n >> m;
	std::vector<int> a(n + m + 2), b(m);
	std::vector<int> pre(n + m + 3);
	for (int i = 0; i < n; i++)
	{
		int x;
		std::cin >> x;
		a[x] = 1;
	}
	for (int i = 1; i < n + m + 3; i++)
		pre[i] = pre[i - 1] + a[i - 1];
	for (int i = 0; i < m; i++)
		std::cin >> b[i];
	int cnt1 = 0, cnt3 = 0;
	for (int i = 0; i < m; i++)
	{
		bool f = false, ff = false;
		int cnt = 0;
		int x = b[i];
		if (a[1])
		{
			cnt1++;
			continue;
		}
		if (a[x]) f = true;
		int r = 2;
		while (r * r <= x)
		{
			if (x % r == 0 && (a[r] || a[x / r]))
			{
				f = true;
				if (a[r]) cnt++;
				if (r != x / r && a[x / r]) cnt++;
			}
			r++;
		}
		if (pre[x] - pre[2] > cnt) ff = true;
		if (f && !ff) cnt1++;
		else if (f && ff) cnt3++;
	}
	if ((cnt3 + 1) / 2 + cnt1 > m / 2) std::cout << "Alice" << std::endl;
	else std::cout << "Bob" << std::endl;
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
