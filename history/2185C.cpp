#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	int n;
	std::cin >> n;
	std::vector<int> v(n);
	for (int i = 0; i < n; i++)
		std::cin >> v[i];
	std::sort(v.begin(), v.end());
	int len = 1, cur = 1, prev = v[0];
	for (int i = 1; i < n; i++)
	{
		if (v[i] == v[i - 1]) continue;
		if (v[i] == prev + 1)
		{
			cur++;
			prev++;
		}
		else
		{
			prev = v[i];
			len = std::max(len, cur);
			cur = 1;
		}
	}
	len = std::max(len, cur);
	std::cout << len << std::endl;
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
