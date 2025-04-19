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
	int prev = 0;
	bool flag = true;
	for (int i = 0; i < n; i++) {
		std::string s;
		std::cin >> s;
		int count = 0;
		for (int j = 0; j < n; j++) {
			if (s[j] == '1') count++;
		}
		if (count && prev && count != prev) flag = false;
		prev = count;
	}
	std::cout << (flag ? "SQUARE" : "TRIANGLE") << std::endl;
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
