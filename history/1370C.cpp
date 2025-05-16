#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	int n;
	std::cin >> n;
	auto check = [](int x) -> bool
	{
		if (x < 2) return false;
		if (x == 2 || x == 3) return true;
		for (int i = 2; i * i <= x; i++)
		{
			if (x % i == 0) return false;
		}
		return true;
	};
	if ((n > 2 && __builtin_popcount(n) == 1) || n == 1 || (n % 2 == 0 && (n / 2 >= 3) && check(n / 2)))
		std::cout << "FastestFinger" << std::endl;
	else std::cout << "Ashishgup" << std::endl;
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
