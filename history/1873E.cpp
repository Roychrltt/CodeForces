#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	long long int n, x;
	std::cin >> n >> x;
	std::vector<int> v(n);
	for (int i = 0; i < n; i++)
		std::cin >> v[i];
	auto check = [&](int h) -> bool
	{
		long long int sum = 0;
		for (int i = 0; i < n; i++)
		{
			sum += std::max(0, h - v[i]);
			if (sum > x) return false;
		}
		return true;
	};
	long long int l = 1, r = *max_element(v.begin(), v.end()) + x;
	while (l < r)
	{
		long long int mid = (l + r + 1) / 2;
		if (check(mid)) l = mid;
		else r = mid - 1;
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
