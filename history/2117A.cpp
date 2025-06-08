#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	int n, k;
	std::cin >> n >> k;
	int idx1 = -1, idx2 = -1;
	for (int i = 0; i < n; i++)
	{
		int x;
		std::cin >> x;
		if (x == 1 && idx1 == -1) idx1 = i;
		else if (x == 1) idx2 = i;
	}
	if (idx2 - idx1 < k) std::cout << "YES" << std::endl;
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
