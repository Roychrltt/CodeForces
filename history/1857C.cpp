#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	int n;
	std::cin >> n;
	std::vector<int> v(n * (n - 1) / 2);
	for (int i = 0; i < n * (n - 1) / 2; i++)
		std::cin >> v[i];
	std::sort(v.begin(), v.end());
	int d = n - 1;
	int i = 0;
	while (i < n * (n - 1) / 2)
	{
		std::cout << v[i] << " ";
		i += d--;
	}
	std::cout << 1000000000 << std::endl;
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
