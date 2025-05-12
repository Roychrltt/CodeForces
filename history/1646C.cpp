#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	long long int n;
	std::cin >> n;
	std::vector<long long int> factorial(15);
	factorial[0] = 1;
	for (size_t i = 1; i < 15; i++)
		factorial[i] = i * factorial[i - 1];
	std::vector<std::pair<long long int, long long int>> factSum(1 << 15);
	for (size_t i = 1; i < (1 << 15); i++)
	{
		factSum[i].first = __builtin_popcount(i);
		factSum[i].second = 0;
		int tmp = 0;
		while ((1 << tmp) <= i)
		{
			if (i & (1 << tmp))
				factSum[i].second += factorial[tmp];
			tmp++;
		}
	}
	long long int res = __builtin_popcountll(n);
	for (auto& p : factSum) {
		if (p.second <= n) res = std::min(res, p.first + __builtin_popcountll(n - p.second));
	}
	std::cout << res << std::endl;
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
