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
	int n, k;
	std::cin >> n >> k;
	std::vector<std::string> v(n);
	for (int i = 0; i < n; i++) {
		std::cin >> v[i];
	}
	std::vector<std::string> ans;
	for (int i = 0; i < n; i += k) {
		std::string s = "";
		for (int j = 0; j < n; j += k) {
			s += v[i][j];
		}
		ans.push_back(s);
	}
	for (const auto& str : ans)
		std::cout << str << std::endl;
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
