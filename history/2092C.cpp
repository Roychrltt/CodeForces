#include <bits/stdc++.h>

static void solve(void)
{
	int n;
	std::cin >> n;
	int cnt = 0;
	std::vector<int> v(n);
	for (int i = 0; i < n; i++) {
		std::cin >> v[i];
		if (v[i] & 1) cnt++;
	}
	if (cnt == 0 || cnt == n) std::cout << *max_element(v.begin(), v.end()) << std::endl;
	else std::cout << std::accumulate(v.begin(), v.end(), 0LL) - cnt + 1 << std::endl;
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
