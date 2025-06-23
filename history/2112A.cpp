#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	int a, x, y;
	std::cin >> a >> x >> y;
	if (x > y) std::swap(x, y);
	if (a >= x && a <= y) std::cout << "NO" << std::endl;
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
