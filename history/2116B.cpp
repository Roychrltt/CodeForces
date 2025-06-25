#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

const long long int MOD = 998244353;

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
	std::vector<int> a(n), b(n);
	std::vector<int> pa(n), pb(n);
	for (int i = 0; i < n; i++)
	{
		std::cin >> a[i];
		if (i)
		{
			if (a[i] > a[pa[i - 1]]) pa[i] = i;
			else pa[i] = pa[i - 1];
		}
	}
	for (int i = 0; i < n; i++)
	{
		std::cin >> b[i];
		if (i)
		{
			if (b[i] > b[pb[i - 1]]) pb[i] = i;
			else pb[i] = pb[i - 1];
		}
	}
	std::cout << (fastPower(2, a[0]) + fastPower(2, b[0])) % MOD << " ";
	for (int i = 1; i < n; i++)
	{
		if (a[pa[i]] > b[pb[i]] || (a[pa[i]] == b[pb[i]] && b[i - pa[i]] > a[i - pb[i]]))
			std::cout << (fastPower(2, a[pa[i]]) + fastPower(2, b[i - pa[i]])) % MOD << " ";
		else std::cout << (fastPower(2, b[pb[i]]) + fastPower(2, a[i - pb[i]])) % MOD << " ";
	}
	std::cout << std::endl;
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
