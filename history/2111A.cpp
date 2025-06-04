#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	long long int n;
	std::cin >> n;
	long long int a = 0, b = 0, c = 0;
	int cnt = 0;
	while (a < n || b < n || c < n)
	{
		if (a <= b && a <= c)
			a = std::min(b, c) * 2 + 1;
		else if (b <= a && b <= c)
			b = std::min(a, c) * 2 + 1;
		else if (c <= b && c <= a)
			c = std::min(b, a) * 2 + 1;
		cnt++;
	}
	std::cout << cnt << std::endl;
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
