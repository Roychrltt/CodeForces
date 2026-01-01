#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	long long int n, m, k;
	std::cin >> n >> m >> k;
	std::multiset<int> box;
	for (int i = 0; i < m; i++)
	{
		int x;
		std::cin >> x;
		box.insert(x);
	}
	std::vector<std::vector<long long int>> v(n, std::vector<long long int>(3));
	long long int x;
	for (int i = 0; i < n; i++)
	{
		std::cin >> v[i][0];
		std::cin >> x;
		k -= x;
		std::cin >> v[i][1];
		v[i][1] -= x;
	}
	std::sort(v.begin(), v.end(), [](const auto& a, const auto& b){ return a[1] < b[1]; });
	int cnt = 0;
	for (int i = n - 1; i >= 0; i--)
	{
		if (box.empty()) break;
		int be = v[i][0];
		if (be > *box.rbegin()) continue;
		auto f = box.lower_bound(be);
		box.erase(f);
		v[i][2] = 1;
		cnt++;
		if (box.empty()) break;
	}
	for (int i = 0; i < n; i++)
	{
		if (v[i][2]) continue;
		k -= v[i][1];
		if (k < 0) break;
		cnt++;
	}
	std::cout << cnt << std::endl;
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
