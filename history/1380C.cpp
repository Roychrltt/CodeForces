#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	int n, x;
	std::cin >> n >> x;
	std::vector<long long int> v(n);
	for (int i = 0; i < n; i++)
		std::cin >> v[i];
	std::sort(v.begin(), v.end(), std::greater<long long int>());
	long long int cnt = 0, i = -1, len = 0;
	while (++i < n)
	{
		len++;
		if (len * v[i] >= x)
		{
			cnt++;
			len = 0;
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
