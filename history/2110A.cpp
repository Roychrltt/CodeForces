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
	if ((v[0] + v[n - 1]) % 2 == 0) std::cout << 0 << std::endl;
	else
	{
		int ans1 = n, ans2 = n;
		int l = 0, r = n - 1;
		if (v[0] % 2 == 0)
		{
			while (r >= 0 && v[r] % 2 == 1) r--;
			while (l < n && v[l] % 2 == 0) l++;
			ans1 = std::min(l, n - r - 1);
		}
		else
		{
			while (r >= 0 && v[r] % 2 == 0) r--;
			while (l < n && v[l] % 2 == 1) l++;
			ans2 = std::min(l, n - r - 1);
		}
		std::cout << std::min(ans1, ans2) << std::endl;
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
