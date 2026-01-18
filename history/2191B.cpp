#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	int n;
	std::cin >> n;
	std::vector<int> v(101);
	int x;
	for (int i = 0; i < n; i++)
	{
		std::cin >> x;
		v[x]++;
	}
	if (!v[0])
	{
		std::cout << "NO" << std::endl;
		return;
	}
	if (v[0] == 1)
	{
		std::cout << "YES" << std::endl;
		return;
	}
	if (v[0] > 1 && v[1]) std::cout << "YES" << std::endl;
	else std::cout << "NO" << std::endl;
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
