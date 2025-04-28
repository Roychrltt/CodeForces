#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	int a, b, c;
	std::cin >> a >> b >> c;
	if ((a + b + c) % 3) std::cout << "NO" << std::endl;
	else if (b > (a + b + c) / 3) std::cout << "NO" << std::endl;
	else std::cout << "YES" << std::endl;
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
