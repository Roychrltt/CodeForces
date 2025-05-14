#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	int n;
	std::cin >> n;
	std::vector<long long int> v(n), pre(n), suf(n);
	for (int i = 0; i < n; i++)
		std::cin >> v[i];
	if (v[0] > 0) pre[0] = v[0];
	else pre[0] = 0;
	for (int i = 1; i < n; i++)
	{
		if (v[i] > 0) pre[i] = pre[i - 1] + v[i];
		else pre[i] = pre[i - 1];
	}
	if (v[n - 1] < 0) suf[n - 1] = std::abs(v[n - 1]);
	else suf[n - 1] = 0;
	for (int i = n - 2; i >= 0; i--)
	{
		if (v[i] < 0) suf[i] = suf[i + 1] + std::abs(v[i]);
		else suf[i] = suf[i + 1];
	}
	long long int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum = std::max(sum, pre[i] + suf[i]);
	}
	std::cout << sum << std::endl;
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
