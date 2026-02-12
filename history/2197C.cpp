#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	long long int p, q;
	std::cin >> p >> q;
	if (p >= q || p * 3 < q * 2) std::cout << "Alice" << std::endl;
	else std::cout << "Bob" << std::endl;
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
