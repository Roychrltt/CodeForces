#include <bits/stdc++.h>

static void solve(void)
{
	long long int r, b, d;
	std::cin >> r >> b >> d;
	if (r > b) std::swap(r, b);
	if (b > r * (d + 1)) std::cout << "NO" << std::endl;
	else std::cout << "YES" << std::endl;
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
