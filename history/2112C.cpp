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
	{
		std::cin >> v[i];
	}
	std::sort(v.begin(), v.end());
	long long int cnt = 0;
	int end = v[n - 1];
	for (int i = n - 1; i > 1; i--)
	{
		for (int j = i - 1; j > 0; j--)
		{
			int c = std::max(end - v[i] - v[j] + 1, v[i] - v[j] + 1);
			int s1 = (v.end() - std::lower_bound(v.begin(), v.end() - n + j, c) - n + j);
			cnt += s1;
		}
	}
	std::cout << cnt << std::endl;
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
