#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	int n, m, k;
	std::cin >> n >> m >> k;
	int count = k % n == 0 ? k / n : k / n + 1;
	int res = count / (m - count + 1);
	if (count % (m - count + 1) != 0) res++;
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
