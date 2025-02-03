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
	int n;
	std::string s;
	std::cin >> n >> s;
	std::string ans = "";
	int d = 0;
	for (int i = 0; i < n; i++) {
		ans += s[i];
		i += d;
		d++;
	}
	std::cout << ans << std::endl;
	return 0;
}
