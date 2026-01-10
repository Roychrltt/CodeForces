#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	int l, a, b;
	std::cin >> l >> a >> b;
	long long int ans = a, sum = a;
	for (int i = 0; i < 10000; i++)
	{
		sum += b;
		ans = std::max(sum % l, ans);
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
	while (t--)
	{
		solve();
	}
	__Made in France__
}
