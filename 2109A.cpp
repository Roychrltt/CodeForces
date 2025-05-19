#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	int n;
	std::cin >> n;
	std::vector<int> v(n);
	int cnt = 0;
	bool ok = true;
	for (int i = 0; i < n; i++)
	{
		std::cin >> v[i];
		if (v[i] == 1) cnt++;
		if (i > 0 && v[i] == 0 && v[i - 1] == 0)
		{
			std::cout << "YES" << std::endl;
			ok = false;
		}
	}
	if (!ok) return;
	if (cnt == n) std::cout << "YES" << std::endl;
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
