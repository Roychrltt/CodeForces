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
	long long int a, b;
	std::cin >> a >> b;
	if (b == 1)
	{
		std::cout << "NO" << std::endl;
		return;
	}
	if (b == 2)
		std::cout << "YES\n" << a << " " << a * 3 << " " << a * 4 << std::endl;
	else
		std::cout << "YES\n" << a << " " << a * (b - 1) << " " << a * b << std::endl;
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
