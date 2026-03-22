#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	int n;
	std::cin >> n;
	std::vector<int> v(n);
	int fidx = -1, idx = -1;
	for (int i = 0; i < n; i++)
		std::cin >> v[i];
	for (int i = 0; i < n; i++)
	{
		if (v[i] != n - i)
		{
			idx = i;
			break;
		}
	}
	if (idx != -1)
	{
		int x = n - idx;
		for (int i = 0; i < n; i++)
		{
			if (v[i] == x)
			{
				fidx = i;
				break;
			}
		}
		std::reverse(v.begin() + idx, v.begin() + fidx + 1);
	}
	std::copy(v.begin(), v.end(), std::ostream_iterator<int>(std::cout, " "));
	std::cout << std::endl;
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
