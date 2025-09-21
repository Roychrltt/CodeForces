#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	int l, r;
	std::cin >> l >> r;
	std::vector<int> v(r + 1);
	for (int i = r; i > 0; i--)
	{
		if (v[i]) continue;
		int cnt = __builtin_clz(i);
		int p2 = std::pow(2, 32 - cnt) - 1;
		int x = p2 - i;
		v[i] = x;
		v[x] = i;
	}
	long long int sum = 0;
	for (int i = 0; i <= r; i++)
		sum += (i | v[i]);
	std::cout << sum << std::endl;
	std::copy(v.begin(), v.end(), std::ostream_iterator<int>(std::cout, " "));
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
