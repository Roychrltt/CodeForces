#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	int n;
	std::cin >> n;
	std::vector<int> cnt(1e4);
	int cur = 0, x = 0;
	for (int i = 0; i < n; i++)
	{
		int x;
		std::cin >> x;
		if (cnt[x]++ == 0) cur++;
	}
	while (42)
	{
		if (cnt[cur]++ == 0) cur++;
		else break;
	}
	std::cout << cur << std::endl;
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
