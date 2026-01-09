#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

constexpr int MOD = 998244353;

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

static void solve(std::vector<long long int>& fact, std::vector<long long int>& invmod)
{
	int n;
	std::cin >> n;
	std::vector<int> v(n);
	int box;
	std::cin >> box;
	for (int i = 0; i < n; i++)
		std::cin >> v[i];
	std::sort(v.begin(), v.end());
	int cnt = 0, mx = v.back(), sum = 0;
	long long int ans = 0;
	if (v[0] == v.back())
	{
		std::cout << fact[n] << std::endl;
		return;
	}

	for (int i = n - 1; i >= 0; i--)
	{
		if (v[i] == mx) cnt++;
		else sum += mx - v[i] - 1;
	}

	if (box < sum)
	{
		std::cout << 0 << std::endl;
		return;
	}

	int num = std::min(box - sum, n - cnt);
	
	for (int i = 0; i <= num; i++)
	{
		long long int x = fact[n - cnt] * invmod[i] % MOD * invmod[n - cnt - i] % MOD;
		x = x * fact[n - cnt - i] % MOD;
		x = x * fact[i + cnt - 1] % MOD;
		x = x * cnt % MOD;
		ans = (ans + x) % MOD;
	}
	std::cout << ans << std::endl;
}

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
	int t;
	std::cin >> t;
	std::vector<long long int> fact(51), invmod(51);
	fact[1] = fact[0] = 1;
	for (int i = 2; i < 51; i++)
		fact[i] = fact[i - 1] * i % MOD;
	invmod[50] = fastPower(fact[50], MOD - 2);
	for (int i = 50; i > 0; i--)
		invmod[i - 1] = invmod[i] * i % MOD;
	while (t--)
	{
		solve(fact, invmod);
	}
	__Made in France__
}
