#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	int n;
	std::cin >> n;
	std::vector<int> v;
	int x;
	std::cin >> x;
	v.push_back(x);
	for (int i = 1; i < n; i++)
	{
		std::cin >> x;
		if (x != v.back()) v.push_back(x);
	}
	if (v.size() == 1) std::cout << 1 << std::endl;
	else
	{
		int cnt = 0;
		bool up = true;
		for (int i = 0; i < v.size() - 1; i++)
		{
			if (i > 0 && v[i] > v[i - 1]) up = true;
			if (v[i] > v[i + 1] && up)
			{
				cnt++;
				up = false;
			}
		}
		if (v.back() > v[v.size() - 2]) cnt++;
		std::cout << cnt << std::endl;
	}
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
