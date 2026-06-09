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
	long long int n;
	std::cin >> n;
	if (n == 10) std::cout << -1 << std::endl;
	else if (n % 12 != 10) std::cout << n % 12 << " " << n - n % 12 << std::endl;
	else std::cout << 22 << " " << n - 22 << std::endl;
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
