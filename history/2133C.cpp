#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	int n;
	std::cin >> n;
	std::unordered_map<int, std::vector<int>> map;
	std::vector<int> all(n);
	std::iota(all.begin(), all.end(), 1);
	std::vector<int> ans;
	int mx = 0, idx = 0;
	for (int i = 1; i <= n; i++)
	{
		std::cout << "? " << i << " " << n << " ";
		std::copy(all.begin(), all.end(), std::ostream_iterator<int>(std::cout, " "));
		std::cout << std::endl;
		int x;
		std::cin >> x;
		if (x > mx)
		{
			mx = x;
			idx = i;
		}
		map[x].push_back(i);
	}
	ans.push_back(idx);
	int cnt = mx - 1, previous = idx;
	while (cnt)
	{
		for (int i : map[cnt])
		{
			std::cout << "? " << previous << " 2 " << previous << " " << i << " " << std::endl;
			int x;
			std::cin >> x;
			if (x == 2)
			{
				previous = i;
				ans.push_back(i);
				break;
			}
		}
		cnt--;
	}
	std::cout << "! " << mx << " ";
	std::copy(ans.begin(), ans.end(), std::ostream_iterator<int>(std::cout, " "));
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
