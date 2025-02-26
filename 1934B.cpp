#include <bits/stdc++.h>

static int solve(int n)
{
	int count = 0;
	if (n >= 15)
	{
		count += n / 15;
		n = n % 15;
	}
	if (n >= 6)
	{
		count += n / 6;
		n = n % 6;
	}
	if (n >= 3)
	{
		count += n / 3;
		n = n % 3;
	}
	if (n)
		count += n;

	return count;
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
		int n;
		std::cin >> n;
		int cur = solve(n);
		if (n >= 10)
			cur = std::min(cur, solve(n - 10) + 1);
		if (n >= 20)
			cur = std::min(cur, solve(n - 20) + 2);
		std::cout << cur << std::endl;
	}
	return 0;
}
