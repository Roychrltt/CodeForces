#include <bits/stdc++.h>

static void solve(void)
{
	int n;
	std::cin >> n;
	std::string a, b;
	std::cin >> a >> b;
	std::array<int, 2> cnt = {};
	for (int i = 0; i < n; i++) {
		if (a[i] == '0') cnt[i % 2]++;
		if (b[i] == '0') cnt[(i + 1) % 2]++;
	}
	if (cnt[0] >= (n + 1) / 2 && cnt[1] >= n / 2) std::cout << "YES" << std::endl;
	else std::cout << "NO" << std::endl;
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
