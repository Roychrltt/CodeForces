#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	int n, x;
	std::cin >> n >> x;
	
	std::vector<int> v(n);
	for (int i = 0; i < n; i++)
		std::cin >> v[i];
	std::sort(v.begin(), v.end());

	int res = 0;
	int l = 0, r = n - 1;
	long long int ans = 0;
	std::vector<int> vv;
	while (l <= r)
	{
		if (res + v[r] >= x)
		{
			ans += v[r];
			vv.push_back(v[r]);
			res = res + v[r] - x;
			r--;
		}
		else
		{
			res += v[l];
			vv.push_back(v[l]);
			l++;
		}
	}
	std::cout << ans << std::endl;
	std::copy(vv.begin(), vv.end(), std::ostream_iterator<int>(std::cout, " "));
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
