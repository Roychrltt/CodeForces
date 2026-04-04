/*
 * Author: Chachou33
 */
#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

template<typename... Args>
void print(Args... args)
{
	((std::cout << args << " "), ...);
	std::cout << std::endl;
}

static void solve(void)
{
	int x, y;
	std::cin >> x >> y;
	if (y < x || ((x + y) % 2 == 0 && !x))
	{
		std::cout << "NO" << std::endl;
		return;
	}
	std::cout << "YES" << std::endl;
	for (int i = 1; i <= x * 2 - 1; i++)
		std::cout << i << " " << i + 1 << std::endl;
	int end = std::max(x * 2, 1);
	for (int i = 1; i < y - x; i++)
		std::cout << end << " " << end + i << std::endl;
	if (x && y > x) std::cout << end << " " << end + y - x << std::endl;
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
