#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	int n;
	std::cin >> n;
	std::vector<int> v(n);
	for (int i = 0; i < n; i++)
		std::cin >> v[i];
	std::sort(v.begin(), v.end());
	int ans = 0;
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			int sum = v[i] + v[j];
			int l = 0, r = n - 1;
			int cnt = 0;
			while (l < r)
			{
				if (v[l] + v[r] == sum)
				{
					cnt++;
					l++, r--;
				}
				else if (v[l] + v[r] < sum) l++;
				else r--;
			}
			ans = std::max(ans, cnt);
		}
	}
	std::cout << ans << std::endl;
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
