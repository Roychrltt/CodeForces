#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	int n;
	std::cin >> n;
	std::vector<long long> v(n);
	for (auto& i : v) std::cin >> i;
	std::vector<long long> pre(n), suf(n);
	pre[0] = v[0];
	for (int i = 1; i < n; i++)
		pre[i] = pre[i - 1] + std::abs(v[i]);
	suf[n - 1] = v[n - 1] * -1;
	for (int i = n - 2; i >= 0; i--)
		suf[i] = suf[i + 1] + v[i] * -1;
	long long int ans = std::max(pre[n - 2], suf[1]);
	for (int i = 1; i < n - 1; i++)
		ans = std::max(ans, pre[i - 1] + suf[i + 1]);
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
