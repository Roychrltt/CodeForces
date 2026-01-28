#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	long long n, k;
    std::cin >> n >> k;

    for (int t = 0; t <= 60; t++)
    {
        long long low = n >> t;
        long long high = (n + (1LL << t) - 1) >> t;

        if (low <= k && k <= high)
        {
			std::cout << t << std::endl;
			return;
        }
    }

	std::cout << -1 << std::endl;
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
