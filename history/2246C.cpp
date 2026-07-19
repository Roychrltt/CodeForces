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

long long int MOD = 1e9 + 7;

long long int fastPower(long long int x, long long int p)
{
	long long int res = 1;
	while (p)
	{
		if (p & 1) res = (res * x) % MOD;
		p >>= 1;
		x = (x * x) % MOD;
	}
	return res;
}

static void solve(void)
{
	int n;
	std::cin >> n;
	std::vector<int> v(n);
	std::unordered_map<int, int> mp;
	for (int i = 0; i < n; i++)
	{
		std::cin >> v[i];
		mp[v[i]]++;
	}
	int sum = 0;
	int len = 0;
	for (int i = 1; i < n; i++)
	{
		if (v[i] == v[i - 1]) len++;
		else
		{
			sum += len;
			len = 0;
		}
	}
	sum += len;
	int e = 1;
	if (v[0] == -1)
	{
		for (const auto [x, _] : mp)
		{
			if (mp.find(x + 1) != mp.end()) e++;
		}
	}
	std::cout << fastPower(2, sum) * e % MOD << std::endl;
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
