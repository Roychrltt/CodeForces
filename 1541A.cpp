#include <bits/stdc++.h>

static void solve(void)
{
	int n;
	std::cin >> n;
	if (n % 2 == 0)
	{
		for (int i = 0; i < n; i += 2)
			std::cout << i + 2 << " " << i + 1 << " ";
	}
	else
	{
		std::cout << "3 1 2 ";
		for (int i = 3; i < n; i += 2) {
			std::cout << i + 2 << " " << i + 1 << " ";
		}
	}
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
	return 0;
}
