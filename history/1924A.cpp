#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	int n, k, m;
	std::cin >> n >> k >> m;
	std::string s;
	std::cin >> s;
	std::vector<int> v(k);
	for (int i = 0; i < k; i++)
		v[i] = 1;
	int cnt = 0, sum = 0;
	std::string ans = "";
	for (int i = 0; i < m; i++)
	{
		if (--v[s[i] - 'a'] == 0) cnt++;
		if (cnt >= k)
		{
			ans += s[i];
			for (int i = 0; i < k; i++)
				v[i] = 1;
			cnt = 0;
			sum++;
		}
	}
	if (sum >= n)
		std::cout << "YES" << std::endl;
	else
	{
		std::cout << "NO" << std::endl;
		int len = n - ans.size();
		char c;
		for (int i = 0; i < k; i++)
		{
			if (v[i] > 0)
			{
				c = 'a' + i;
				break;
			}
		}
		ans.append(len, c);
		std::cout << ans << std::endl;
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
