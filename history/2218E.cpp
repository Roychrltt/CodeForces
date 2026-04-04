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
	int n;
	std::cin >> n;
	std::vector<int> v(n);
	for (int i = 0; i < n; i++)
		std::cin >> v[i];
	int sum = 0;
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			sum = std::max(sum, v[i] ^ v[j]);
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
