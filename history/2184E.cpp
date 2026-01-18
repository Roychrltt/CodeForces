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
	for (int i = 0; i < n - 1; i++)
		v[i] = std::abs(v[i + 1] - v[i]);
	v.back() = 0;
	std::vector<int> r(n - 1, n - 1), l(n - 1, -1);
	std::stack<int> s;
	std::vector<long long int> ans(n);
	std::vector<std::vector<int>> ma(n);
	for (int i = 0; i < n - 1; i++)
		ma[v[i]].push_back(i);
	for (int i = 0; i <= n - 2; i++)
	{
		while (!s.empty() && v[s.top()] > v[i]) s.pop();
		if (!s.empty()) l[i] = s.top();
		s.push(i);
	}
	while (!s.empty()) s.pop();
	for (int i = n - 2; i >= 0; i--)
	{
		while (!s.empty() && v[s.top()] >= v[i]) s.pop();
		if (!s.empty()) r[i] = s.top();
		s.push(i);
	}
	long long int cnt = 0;
	for (int i = n - 1; i >= 1; i--)
	{
		for (int p : ma[i]) cnt += 1ll * (r[p] - p) * (p - l[p]);
		ans[i] = cnt;
	}
	for (int i = 1; i < n - 1; i++)
		std::cout << ans[i] << " ";
	std::cout << ans[n - 1] << std::endl;
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
