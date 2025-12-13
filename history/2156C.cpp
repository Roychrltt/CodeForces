#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	int n, k;
	std::cin >> n >> k;
	std::vector<long long int> v(n + 1), pre(n + 1);
	for (int i = 0; i < n; i++)
	{
		int x;
		std::cin >> x;
		v[x]++;
		pre[x]++;
	}
	for (int i = 1; i < n + 1; i++)
		pre[i] += pre[i - 1];
	int mx = 1;
	for (int i = 2; i < n + 1; i++)
	{
		int cnt = v[i];
		if (i * 3 <= n) cnt += v[i * 3]; 
		if (i * 2 <= n) cnt += v[i * 2]; 
		if (i * 4 <= n) cnt += pre[n] - pre[i * 4 - 1]; 
		if (cnt >= n - k) mx = i;
	}
	std::cout << mx << std::endl;
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
