#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	int n;
	std::cin >> n;
	int reg = -1;
	int x = 0;
	bool ok = true;
	for (int i = 0; i < n; i++)
	{
		std::cin >> x;
		if (x != -1 && reg == -1) reg = x;
		else if (x != -1 && reg != -1 && reg != x) ok = false;
	}
	if (reg == 0)
	{
		std::cout << "NO" << std::endl;
		return;
	}
	std::cout << (ok ? "YES" : "NO") << std::endl;
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
