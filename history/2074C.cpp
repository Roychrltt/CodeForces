#include <bits/stdc++.h>

static void solve(void)
{
	int n;
	std::cin >> n;
	int count = 0, i = 0;
	int ans = 0;
	int tmp = n;
	while (n)
	{
		if (n & 1) count++;
		i++;
		n >>= 1;
	}
	if (count == 1 || count == i)
	{
		std::cout << -1 << std::endl;
		return;
	}
	if (tmp % 2 == 0)
	{
		i--;
		ans = (1 << i) + 1;
		std::cout << ans << std::endl;
		return;
	}
	i = 0;
	while (tmp & (1 << i))
	{
		ans += (1 << i);
		i++;
	}
	ans += (1 << i);
	std::cout << ans << std::endl;
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
