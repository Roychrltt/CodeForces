#include <bits/stdc++.h>

static void solve(void)
{
	int a, b, c;
	std::cin >> a >> b >> c;
	if (a + b == c || a + c == b || b + c == a) std::cout << "YES" << std::endl;
	else if ((a == b && c % 2 == 0) || (a == c && b % 2 == 0) || (b == c && a % 2 == 0)) std::cout << "YES" << std::endl;
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
