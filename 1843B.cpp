#include <bits/stdc++.h>

static void solve(void)
{
	int n;
	std::cin >> n;
	std::vector<long long> v(n);
	for (int i = 0; i < n; i++)
	{
		std::cin >> v[i];
	}
	int count = 0;
	long long int ans = std::abs(v[0]);
	if (v[0] < 0) count++;
	bool flag = count ? false : true;
	for (int i = 1; i < n; i++) {
		if (v[i] > 0) flag = true;
		if (flag && v[i] < 0)
		{
			count++;
			flag = false;
		}
		ans += std::abs(v[i]);
	}
	std::cout << ans << " " << count << std::endl;
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
	return 0;
}
