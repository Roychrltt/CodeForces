#include <bits/stdc++.h>

static void solve(void)
{
	int n;
	std::cin >> n;
	std::vector<int> v(n);
	int sum = 0;
	for (int i = 0; i < n; i++) {
		std::cin >> v[i];
		sum += v[i];
	}
	if (sum % n)
	{
		std::cout << -1 << std::endl;
		return;
	}
	int count = 0;
	int d = sum / n;
	for (int i = 0; i < n; i++) {
		if (v[i] > d) count++;
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
