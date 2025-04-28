#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
	int n, k;
	std::string s;
	std::cin >> n >> k >> s;
	std::vector<std::vector<int>> v(k);
	std::vector<std::vector<int>> cnt(n, std::vector<int>(k));
	for (int i = 0; i < n; i++)
	{
		int x = s[i] - 'a';
		v[x].push_back(i);
		if (i > 0)
		{
			for (int j = 0; j < k; j++)
				cnt[i][j] = cnt[i - 1][j];
		}
		cnt[i][x]++;
	}
	int t;
	std::cin >> t;
	while (t--)
	{
		std::string str;
		std::cin >> str;
		int len = str.size();
		if (v[s[len - 1] - 'a'].size() == 0)
		{
			std::cout << "0" << std::endl;
			continue;
		}
		int prev = v[s[len - 1] - 'a'].back() - 1;
		bool ok = true;
		for (int i = 2; i <= len; i++)
		{
			int x = str[len - i] - 'a';
			if (v[x].size() == 0 || prev <= *(v[x].begin()))
			{
				ok = false;
				std::cout << "0" << std::endl;
				break;
			}
			prev = *std::lower_bound(v[x].begin(), v[x].end(), prev - 1);
		}
		if (ok)
		{
			int min = n;
			for (int i = 0; i < k; i++)
				min = std::min(min, cnt[prev][i]);
			std::cout << min + 1 << std::endl;
		}
	}
	__Made in France__
}
