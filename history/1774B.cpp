#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	int n, m, k;
	std::cin >> n >> m >> k;
	long long int reg = 0;
	for (int i = 0; i < m; i++)
	{
		int x;
		std::cin >> x;
		if (x == (n + k - 1) / k) reg++;
		else if (x > (n + k - 1) / k) reg = (1 << 30);
	}
	std::cout << (reg <= (n - 1) % k + 1 ? "YES" : "NO") << std::endl;
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
