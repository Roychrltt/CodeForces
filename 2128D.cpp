#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	int n;
	std::cin >> n;
	std::vector<long long int> v(n), pre(n);
	for (int i = 0; i < n; i++)
		std::cin >> v[i];
	long long int ans = 1, prev = 1;
	pre[0] = 1;
	for (int i = 1; i < n; i++)
	{
		pre[i] = pre[i - 1] + (v[i] < v[i - 1]);
		prev += pre[i] > pre[i - 1] ? i + 1 : 1;
		ans += prev;
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
