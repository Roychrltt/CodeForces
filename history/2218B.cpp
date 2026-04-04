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
	std::vector<int> v(7);
	for (int i = 0; i < 7; i++)
		std::cin >> v[i];
	std::sort(v.begin(), v.end());
	int sum = 0;
	for (int i = 0; i < 6; i++)
		sum -= v[i];
	sum += v.back();
	std::cout << sum << std::endl;
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
