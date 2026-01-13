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
	std::map<int, int> mp1, mp2;
	for (int i = 0; i < n - 1; i++)
	{
		int x = std::abs(v[i + 1] - v[i]);
		mp1[x] = i;
	}
	std::vector<long long int> ans(n + 1);
	for (int i = n - 1; i > 0; i--)
	{
		if (mp1.find(i) == mp1.end())
		{
			ans[i] = ans[i + 1];
			continue;
		}

	}
		


	std::copy(ans.begin() + 1, ans.end() - 1, std::ostream_iterator<int>(std::cout, " "));
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
