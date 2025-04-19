#include <bits/stdc++.h>

static void solve(void)
{
	int n, k;
	std::cin >> n >> k;
	std::vector<int> v(k);
	int count = 0;
	for (int i = 0; i < k; i++) {
		std::cin >> v[i];
	}
	std::sort(v.begin(), v.end());
	for (int i = 0; i < k - 1; i++) {
		count += 2 * v[i] - 1;
	}
	std::cout << count << std::endl;
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
