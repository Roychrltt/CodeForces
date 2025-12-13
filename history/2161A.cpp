#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	long long int r, x, d, n;
	std::cin >> r >> x >> d >> n;
	std::string s;
	std::cin >> s;

	int cnt = 0;
	for (char c : s)
	{
		if (c == '1')
		{
			cnt++;
			r = std::max(0ll, r - d);
		}
		else if (r < x)
		{
			cnt++;
			r = std::max(0ll, r - d);
		}
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
