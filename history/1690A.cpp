#include <bits/stdc++.h>

static void solve(void)
{
	int n;
	std::cin >> n;
	int a = n / 3 - 1;
	int b = n % 3 == 2 ? a + 2 : a + 1;
	std::cout << b << " " << n - a - b << " " << a << std::endl;
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
