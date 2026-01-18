#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	int n, m, k;
	std::cin >> n >> m >> k;
	std::vector<int> robot(n), spike(m), l(k + 2, INT_MAX), r(k + 2, INT_MAX);
	for (int i = 0; i < n; i++)
		std::cin >> robot[i];
	for (int i = 0; i < m; i++)
		std::cin >> spike[i];
	std::sort(spike.begin(), spike.end());
	int cur = 0;
	std::string s;
	std::cin >> s;
	for (int i = 0; i < s.size(); i++)
	{
		char c = s[i];
		if (c == 'R') cur++;
		else cur--;
		if (cur > 0 && r[cur] == INT_MAX) r[cur] = i + 1;
		else if (cur < 0 && l[cur * -1] == INT_MAX) l[cur * -1] = i + 1;
	}
	std::vector<int> ans(k + 1);
	for (int i : robot)
	{
		int ll = -1, rr = -1;
		if (spike[0] > i)
		{
			rr = spike[0] - i;
			rr = std::min(rr, k + 1);
			int dr = r[rr];
			if (dr < k + 1) ans[dr]++;
		}
		else if (spike.back() < i)
		{
			ll = i - spike.back();
			ll = std::min(ll, k + 1);
			int dl = l[ll];
			if (dl < k + 1) ans[dl]++;
		}
		else
		{
			auto it = std::lower_bound(spike.begin(), spike.end(), i);
			int dr = (*it - i);
			dr = std::min(dr, k + 1);
			int dl = i - *(--it);
			dl = std::min(dl, k + 1);
			int f = std::min(l[dl], r[dr]);
			if (f < k + 1) ans[f]++;
		}
	}
	int cnt = 0;
	for (int i = 1; i <= k; i++)
	{
		cnt += ans[i];
		std::cout << n - cnt << " ";
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
