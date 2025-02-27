#include <bits/stdc++.h>

static void solve(void)
{
	int n;
	std::cin >> n;
	std::vector<int> v(n);
	for (int i = 0; i < n; i++) {
		std::cin >> v[i];
	}
	std::sort(v.begin(), v.end(), std::greater<int>());
	long long int sum1 = 0, sum2 = 0;
	for (int i = 0; i < n; i++) {
		if (i & 1)
		{
			if (v[i] & 1)
				sum2 += v[i];
		}
		else
		{
			if (!(v[i] & 1))
				sum1 += v[i];
		}
	}
	if (sum1 > sum2)
		std::cout << "Alice" << std::endl;
	else if (sum1 < sum2)
		std::cout << "Bob" << std::endl;
	else
		std::cout << "Tie" << std::endl;
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
