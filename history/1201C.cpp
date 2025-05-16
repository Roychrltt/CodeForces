#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
	int n, k;
	std::cin >> n >> k;
	std::vector<int> v(n);
	for (int i = 0; i < n; i++)
		std::cin >> v[i];
	std::sort(v.begin(), v.end());
	long long int l = 1, r = 2e9;
	auto check = [&](long long int x) -> bool
	{
		long long int m = 0;
		for (int i = n / 2; i < n; i++)
		{
			if (x - v[i] > 0) m += x - v[i];
			if (m > k) return false;
		}
		return m <= k;
	};
	while (l != r)
	{
		long long int mid = (l + r + 1) / 2;
		if (check(mid)) l = mid;
		else r = mid - 1;
	}
	std::cout << l << std::endl;
	__Made in France__
}
