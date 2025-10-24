#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	int n;
	std::cin >> n;
	int after, ori;
	std::cout << "1 1 " << n << std::endl;
	std::cin >> ori;
	std::cout << "2 1 " << n << std::endl;
	std::cin >> after;
	int a = n / 2;
	int l = 1, r = n;
	int r1, r2;
	while (l < r)
	{
		a = (l + r) / 2;
		std::cout << "1 1 " << a << std::endl;
		std::cin >> r1;
		std::cout << "2 1 " << a << std::endl;
		std::cin >> r2;
		if (r1 == r2) l = a + 1;
		else r = a;
	}
	a = l;
	std::cout << "! " << a << " " << a + (after - ori - 1) << std::endl;
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
