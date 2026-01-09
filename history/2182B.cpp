#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	int a, b;
	std::cin >> a >> b;
	int ans1 = 0, ans2 = 0;
	int aa = a, bb = b;
	while (1)
	{
		if (!(ans1 & 1) && a < pow(2, ans1)) break;
		if ((ans1 & 1) && b < pow(2, ans1)) break;
		if (ans1 & 1) b -= pow(2, ans1);
		else a -= pow(2, ans1);
		ans1++;
	}
	while (1)
	{
		if ((ans2 & 1) && aa < pow(2, ans2)) break;
		if (!(ans2 & 1) && bb < pow(2, ans2)) break;
		if (ans2 & 1) aa -= pow(2, ans2);
		else bb -= pow(2, ans2);
		ans2++;
	}
	std::cout << std::max(ans1, ans2) << std::endl;
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
