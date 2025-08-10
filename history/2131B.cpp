#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	int n;
	std::cin >> n;
	if (n == 2)
	{
		std::cout << "-1 2" << std::endl;
		return;
	}
	for (int i = 0; i < n - 1; i++)
		std::cout << ((i & 1) ? "3" : "-1") << " ";
	std::cout << ((n & 1) ? "-1" : "2") << std::endl;
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
