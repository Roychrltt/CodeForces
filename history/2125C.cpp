#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	long long int l, r;
	std::cin >> l >> r;
	std::vector<int> prime = {2, 3, 5, 7};
	auto f = [&](long long int x)
	{
		long long int ans = x;
		for (int i = 1; i < (1 << 4); i++)
		{
			long long int lcm = 1;
			for (int j = 0; j < 4; j++)
				if (i & (1 << j)) lcm *= prime[j];
			if (__builtin_popcount(i) & 1) ans -= x / lcm;
			else ans += x / lcm;
		}
		return ans;
	};
	std::cout << f(r) - f(l - 1) << std::endl;
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
