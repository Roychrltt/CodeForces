#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	int n;
	std::cin >> n;
	std::vector<int> cnt(n + 1);
	for (int i = 0; i < n; i++)
	{
		int x;
		std::cin >> x;
		cnt[x]++;
	}
	int idx = 0;
	while (idx <= n && cnt[idx])
		idx++;
	int s1 = std::accumulate(cnt.begin(), cnt.begin() + idx, 0);
	int s = std::accumulate(cnt.begin(), cnt.end(), 0);
	int var = s - idx;
	std::sort(cnt.begin(), cnt.begin() + idx);
	for (int i = 0; i <= n; i++)
	{
		if (i <= var)
		{
			int p = std::upper_bound(cnt.begin(), cnt.begin() + idx, i) - cnt.begin();
			std::cout << p + 1 << " ";
		}
		else
			std::cout << idx - i + var + 1 << " ";
	}	
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
