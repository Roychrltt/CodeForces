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
	long long int ans = LONG_LONG_MAX;
	long long int i = 0, f0, f1;
	while (i < n)
	{
		f0 = i * v[i];
		while (i < n - 1 && v[i] == v[i + 1])
			i++;
		f1 = v[i] * (n - i - 1);
		ans = std::min(f1 + f0, ans);
		i++;
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
