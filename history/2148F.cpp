#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	int n;
	std::cin >> n;
	std::vector<std::deque<int>> a(n);
	for (int i = 0; i < n; i++) {
		int m;
		std::cin >> m;
		for (int j = 0; j < m; j++) {
			int x;
			std::cin >> x;
			a[i].push_back(x);
		}
	}
	std::sort(a.begin(), a.end(), [](const std::deque<int>& d1, const std::deque<int>& d2) {
			return d1.size() > d2.size();});
	std::vector<int> ans;
	while (!a.empty()) {
		auto cur = *std::min_element(a.begin(), a.end());
		ans.insert(ans.end(), cur.begin(), cur.end());
		while (!a.empty() && a.back().size() <= cur.size()) a.pop_back();
		for (int i = 0; i < a.size(); i++)
			for (int j = 0; j < cur.size(); j++)
				if (!a[i].empty()) a[i].pop_front();
	}
	for (int i = 0; i < ans.size(); i++)
		std::cout << ans[i] << ' ';
	std::cout << std::endl;
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
