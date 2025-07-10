#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	int n;
	std::cin >> n;
	std::vector<int> v(n);
	for (int i = 0; i < n; i++)
		std::cin >> v[i];
	int x, y;
	for (int i = 0; i < n - 1; i++)
	{
		if (v[i] > v[i + 1])
		{
			std::cout << "YES" << std::endl;
			std::cout << 2 << std::endl;
			std::cout << v[i] << " " << v[i + 1] << std::endl;
			return;
		}
	}
	std::cout << "NO" << std::endl;
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
