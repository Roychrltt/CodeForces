#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
	long long int n, k;
	std::cin >> n >> k;
	std::vector<long long int> v(n), pre(n + 1);
	for (int i = 0; i < n; i++)
	{
		std::cin >> v[i];
		pre[i + 1] = v[i] + pre[i];
	}
	long long int cnt = 0;
	for (int i = 0; i < n; i++)
	{
		auto idx = (std::lower_bound(pre.begin(), pre.end(), pre[i + 1] - k) - pre.begin());
		long long int x = i - idx + 1;
		cnt += x * (x + 1) / 2;
	}
	std::cout << cnt << std::endl;
	__Made in France__
}
