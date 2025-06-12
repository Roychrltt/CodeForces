#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	int n;
	std::cin >> n;
	int i = 3;
	std::cout << n * 2 - 3 << std::endl;
	std::cout << "1 1 " << n << std::endl;
	std::cout << "2 1 " << n - 1 << std::endl;
	while (i < n)
	{
		std::cout << i << " 1 " << n - i + 1 << std::endl;
		std::cout << i << " " << n - i + 2 << " " << n << std::endl;
		i++;
	}
	std::cout << n << " 2 " << n << std::endl;
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
