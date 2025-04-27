#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	int n;
	std::string s;
	std::cin >> n >> s;
	std::vector<int> ans(n);
	std::vector<int> pos0, pos1;
	for (int i = 0; i < n; ++i) {
		int cur = pos0.size() + pos1.size();
		if (s[i] == '0')
		{
			if (pos1.empty())
				pos0.push_back(cur);
			else
			{
				cur = pos1.back();
				pos1.pop_back();
				pos0.push_back(cur);
			}
		}
		else
		{
			if (pos0.empty())
				pos1.push_back(cur);
			else
			{
				cur = pos0.back();
				pos0.pop_back();
				pos1.push_back(cur);
			}
		}
		ans[i] = cur;
	}
	std::cout << pos0.size() + pos1.size() << std::endl;
	for (auto it : ans) std::cout << it + 1 << " ";
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
