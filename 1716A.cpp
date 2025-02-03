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
	if (n == 1) std::cout << 2 << std::endl;
	else if (n % 3 == 0) std::cout << n / 3 << std::endl;
	else if (n % 3 == 2) std::cout << n / 3 + 1 << std::endl;
	else std::cout << std::min(n / 2, n / 3 + 1) << std::endl;
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
