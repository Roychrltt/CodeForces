#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	unsigned int a, b;
	std::cin >> a >> b;
	if (std::bit_width(b) > std::bit_width(a))
	{
		std::cout << -1 << std::endl;
		return;
	}
	if (b == a)
	{
		std::cout << 0 << std::endl;
		return;
	}
	unsigned c = 0;
	for (int i = 0; i < std::bit_width(a); i++)
		c |= (1 << i);
	std::cout << 2 << std::endl;
	unsigned int d = (c ^ a);
	unsigned int e = c ^ b;
	std::cout << d << " " << e << std::endl;
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
	__Made in France__
}
