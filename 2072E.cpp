#include <bits/stdc++.h>

static void solve(void)
{
	int n;
	std::cin >> n;
	int i = 0;
	while (i * (i + 1) / 2 < n)
		i++;
	int sum = n - i * (i - 1) / 2;
	int num = i + sum;
	std::cout << num << std::endl;
	for (int j = 0; j < i; j++) {
		std::cout << "0 " << j << std::endl;
	}
	for (int j = 0; j < sum; j++) {
		std::cout << j + 1 << " " << j << std::endl;
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
