/*
 * Author: Chachou33
 */
#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

template<typename... Args>
void print(Args... args)
{
	((std::cout << args << " "), ...);
	std::cout << std::endl;
}

static void solve(void)
{
	int n;
	std::cin >> n;
	std::vector<long long int> v(n);
	for (int i = 0; i < n; i++)
		std::cin >> v[i];
	std::sort(v.begin(), v.end());
	if (n == 1)
	{
		if (v[0] >= 3) std::cout << v[0] << std::endl;
		else std::cout << 0 << std::endl;
		return;
	}
	if (v.back() == 1)
	{
		std::cout << 0 << std::endl;
		return;
	}
	if (v[n - 2] == 1)
	{
		long long int sum = std::reduce(v.begin(), v.end(), 0ll);
		std::cout << std::min(sum, v[n - 1] + v[n - 1] / 2) << std::endl;
		return;
	}
	long long int cnt = 0, one = 0, extra = 0, three = 0;
	for (const auto& x : v)
	{
		if (x == 1) one++;
		if (x == 3) three++;
		if (x >= 2)
		{
			cnt += x;
			extra += x / 2 - 1;
		}
	}
	if (cnt == 0)
	{
		std::cout << 0 << std::endl;
		return;
	}
	if (cnt == 2)
	{
		if (v[0] == 1) std::cout << 3 << std::endl;
		else std::cout << 0 << std::endl;
		return;
	}
	std::cout << cnt + std::min(one, extra) << std::endl;
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
