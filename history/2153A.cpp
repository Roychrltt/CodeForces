#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	int n;
	std::cin >> n;
	std::vector<int> v(101);
	for (int i = 0; i < n; i++)
	{
		int x;
		std::cin >> x;
		if (v[x] == 0) v[x] = 1;
	}
	std::cout << std::reduce(v.begin(), v.end(), 0) << std::endl;
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
