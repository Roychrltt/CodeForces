#include <iostream>
#include <utility>
#include <string>
#include <vector>
#include <cmath>
#include <unordered_map>
#include <algorithm>
#include <numeric>

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
	int a, b;
	std::cin >> a >> b;
	a = std::min(a, b);
	long long int ans = 1;
	while (a)
	{
		ans *= a;
		a--;
	}
	std::cout << ans << std::endl;
	return 0;
}
