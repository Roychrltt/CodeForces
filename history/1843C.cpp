#include <bits/stdc++.h>

static void solve(void)
{
	long long n;
	std::cin >> n;
	long long count = n;
	while (n)
	{
		count += n / 2;
		n /= 2;
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
