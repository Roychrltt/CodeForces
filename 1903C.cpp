#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	int n;
	std::cin >> n;
	std::vector<long long int> v(n);
	for (auto &i : v) std::cin >> i;
	if (n == 1)
	{
		std::cout << v[0] << std::endl;
		return;
	}
	std::vector<long long int> suf(n);
	suf[n - 1] = v[n - 1];
	for (int i = n - 2; i >= 0; i--)
		suf[i] = suf[i + 1] + v[i];
	std::sort(suf.begin() + 1, suf.end(), std::greater<>());
	long long int ans = suf[0];
	for (int i = 1; i < n; i++)
	{
		if (suf[i] <= 0) break;
		ans += suf[i];
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
