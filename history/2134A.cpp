#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	int n, a, b;
	std::cin >> n >> a >> b;
	if ((n & 1) && (a & 1) && (b & 1)) std::cout << "YES" << std::endl;
	else if (!(n & 1) && !(a & 1) && !(b & 1)) std::cout << "YES" << std::endl;
	else if ((n & 1) && (b & 1) && b >= a) std::cout << "YES" << std::endl;
	else if (!(n & 1) && !(b & 1) && b >= a) std::cout << "YES" << std::endl;
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
