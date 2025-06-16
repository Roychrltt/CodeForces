#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	int n, k, l;
	std::cin >> n >> k >> l;
	std::vector<int> v(n);
	for (int i = 0; i < n; i++)
		std::cin >> v[i];

	int cnt = 0;
	std::vector<int> tide(2 * k + 1);
	for (int i = 0; i < k; i++)
		tide[i] = k - i;
	for (int i = 0; i <= k; i++)
		tide[k + i] = i;
	auto check = [&](int i, int cnt) -> bool
	{
		if (cnt == 0) return true;
		for (int j = 0; j <= 2 * k - cnt; j++)
		{
			for (int jj = 0; jj < cnt; jj++)
			{
				if (v[i + jj] + tide[j + jj] > l) break;
				if (jj == cnt - 1) return true;
			}
		}
		return false;
	};
	for (int i = 0; i < n; i++)
	{
		if (v[i] + k <= l)
		{
			if (!check(i - cnt, cnt))
			{
				std::cout << "No" << std::endl;
				return;
			}
			cnt = 0;
		}
		else cnt++;
		if (cnt >= 2 * k)
		{
			std::cout << "No" << std::endl;
			return;
		}
	}
	if (!check(n - cnt, cnt)) std::cout << "No" << std::endl;
	else std::cout << "Yes" << std::endl;
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
