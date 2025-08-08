#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	long long int n, c;
	std::cin >> n >> c;
	std::vector<long long int> v(n);
	for (int i = 0; i < n; i++)
		std::cin >> v[i];
	int cnt = 0;
	while (!v.empty())
	{
		std::sort(v.begin(), v.end());
		if (v[0] > c)
		{
			cnt += v.size();
			break;
		}
		int idx = std::lower_bound(v.begin(), v.end(), c) - v.begin();
		if (v[idx] > c) idx--;
		v.erase(v.begin() + idx);
		for (long long int &l : v) l *= 2;
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
