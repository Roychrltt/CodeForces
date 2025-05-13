#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	int n;
	std::cin >> n;
	if (n & 1)
	{
		for (int i = 0; i < n * (n - 1) / 2; i++)
		{
			if (i & 1) std::cout << -1 << std::endl;
			else std::cout << 1 << std::endl;
		}
	}
	else
	{

	}
	
	1-2 1-3 1-4 1-5 1-6 1-7 1-8 1-9 1-10
	2-3 2-4 2-5 2-6 2-7 2-8 2-9 2-10
	3-4 3-5 3-6 3-7 3-8 3-9 3-10
	0 1 -1 1 -1 1 -1 1 -1
	1 -1 1 -1 1 -1 1 -1
	0 1 -1 1 -1 1 -1
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
