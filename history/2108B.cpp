#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	int n, x;
	std::cin >> n >> x;
    int cnt = __builtin_popcountll(x);
	if (n <= cnt) std::cout << x << std::endl;
	else if ((n - cnt) % 2 == 0) std::cout << x + n - cnt << std::endl;
    else
	{
        if (x > 1) std::cout << x + n - cnt + 1 << std::endl;
		else if (x == 1) std::cout << n + 3 << std::endl;
		else std::cout << (n == 1 ? -1 : n + 3) << std::endl;
    }
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
