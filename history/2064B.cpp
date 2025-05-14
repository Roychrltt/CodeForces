#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	int n;
	std::cin >> n;
	std::vector<int> v(n);
	std::unordered_map<int, int> map;
	for (int i = 0; i < n; i++)
	{
		std::cin >> v[i];
		map[v[i]]++;
	}

	int len = 0, cur = 0, left = 0, right = -1, debut = 0;
	for (int i = 0; i < n; i++)
	{
		if (map[v[i]] == 1)
		{
			if (cur++ == 0)
			{
				debut = i + 1;
			}
		}
		else
		{

			if (cur > len)
			{
				len = cur;
				left = debut;
				right = i;
			}
			cur = 0;
		}
	}
	if (cur > len)
	{
		left = debut;
		right = n;
	}
	if (right != -1)
		std::cout << left << " " << right << std::endl;
	else
		std::cout << 0 << std::endl;
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
