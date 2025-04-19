#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	int n, k;
	std::cin >> n >> k;
	std::vector<int> v(n);
	int l = 0, r = n / k * 2 + 2;
	for (int i = 0; i < n; i++) {
		std::cin >> v[i];
	}
	std::unordered_map<int, int> map;
	auto check = [&](int mid) -> bool
	{
		int cnt = 0, e = 0;

		for (int i = 0; i < n; i++) {
			if (map.find(v[i]) == map.end() && v[i] < mid)
			{
				map[v[i]]++;
				e++;
			}
			if (e == mid)
			{
				cnt++;
				e = 0;
				map.clear();
			}
			if (cnt == k) break;
		}
		map.clear();
		return cnt == k;
	};

	while (l < r - 1)
	{
		int mid = (l + r) / 2;
		if (check(mid)) l = mid;
		else r = mid - 1;
	}
	if (check(l + 1)) l++;
	std::cout << l << std::endl;
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
