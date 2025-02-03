#include <iostream>
#include <utility>
#include <string>
#include <vector>
#include <cmath>
#include <unordered_map>
#include <algorithm>
#include <numeric>

static void solve(void)
{
	int n;
	std::cin >> n;
	if (n % 7 == 0)
	{
		std::cout << n << std::endl;
		return;
	}
	int a = n % 10;
	int b = n % 7;
	if (a >= b) std::cout << n - b << std::endl;
	else std::cout << n + 7 - b << std::endl;
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
