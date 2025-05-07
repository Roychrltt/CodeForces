#include <bits/stdc++.h>

static void solve(void)
{
	int n, k;
	std::cin >> n >> k;
	std::vector<int> v(n);
	long long int sum = 0;
	for (int i = 0; i < n; i++) {
		std::cin >> v[i];
		sum += v[i];
	}
	std::sort(v.begin(), v.end());
	if (v[n - 1] - v[0] > k + 1 || v[n - 2] - v[0] > k)
		std::cout << "Jerry" << std::endl;
	else
	{
		if (sum & 1) std::cout << "Tom" << std::endl;
		else std::cout << "Jerry" << std::endl;
	}
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
