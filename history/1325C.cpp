#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
	int n;
	std::cin >> n;
	std::vector<std::pair<int, int>> v(n - 1);
	std::unordered_map<int, int> map;
	for (int i = 0; i < n - 1; i++)
	{
		std::cin >> v[i].first >> v[i].second;
		map[v[i].first]++;
		map[v[i].second]++;
	}
	int check = -1;
	for (auto& [a, b] : map)
	{
		if (b >= 3)
		{
			check = a;
			break;
		}
	}
	if (check == -1)
	{
		for (int i = 0; i < n - 1; i++)
			std::cout << i << std::endl;
	}
	else
	{
		std::vector<int> ans(n - 1, -1);
		int cnt = 0;
		int reg = n - 2;
		for (int i = 0; i < n - 1; i++)
		{
			if (cnt < 3 && (v[i].first == check || v[i].second == check))
				ans[i] = cnt++;
			else ans[i] = reg--;
		}
		std::copy(ans.begin(), ans.end(), std::ostream_iterator<int>(std::cout, "\n"));
	}
	__Made in France__
}
