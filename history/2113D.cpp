#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	int n;
	std::cin >> n;
	std::vector<int> a(n), b(n);
	std::vector<int> pre(n), suf(n);
	for (int i = 0; i < n; i++)
	{
		std::cin >> a[i];
		if (i > 0) pre[i] = a[i] < a[pre[i - 1]] ? i : pre[i - 1];
	}
	suf[n - 1] = n - 1;
	for (int i = n - 2; i >= 0; i--)
		suf[i] = a[i] > a[suf[i + 1]] ? i : suf[i + 1];
	for (int i = 0; i < n; i++)
		std::cin >> b[i];
	auto check = [&](void) -> int
	{
		int cnt = 0;
		for (int i = 0, x = 0, y = 0; i < n; i++)
		{
			if (a[x] > b[y])
			{
				cnt++;
				x++;
			}
			else y++;
		}
		return cnt;
	};
	int m = check();
	int l = m, r = n;
	while (l + 1 < r)
	{
		m = (l + r + 1) / 2;
		std::swap(a[pre[m - 1]], a[suf[m]]);
		if (check() >= m) l = m;
		else r = m;
		std::swap(a[pre[m - 1]], a[suf[m]]);
	}
	std::cout << l << std::endl;
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
