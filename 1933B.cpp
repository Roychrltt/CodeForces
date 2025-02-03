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
	std::vector<int> v(n);
	int sum = 0;
	bool flag = false;
	for (int i = 0; i < n; i++) {
		std::cin >> v[i];
		sum += v[i];
		if (v[i] % 3 == 1) flag = true;
	}
	if (sum % 3 == 0) std::cout << 0 << std::endl;
	else if ((sum % 3 == 1 && flag) || sum % 3 == 2) std::cout << 1 << std::endl;
	else std::cout << 2 << std::endl;
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
