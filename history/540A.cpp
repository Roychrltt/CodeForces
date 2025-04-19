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
	std::cin >> n;
	std::string s, ss;
	std::cin >> s >> ss;
	int count = 0;
	for (int i = 0; i < n; i++) {
		count += std::min(std::abs(s[i] - ss[i]), 10 - std::abs(s[i] - ss[i]));
	}
	std::cout << count << std::endl;
	return 0;
}
