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
	std::string s;
	std::cin >> s;
	int n = s.length();
	int count = 0;
	int l = 0, r = n - 1;
	while (s[l] != '1')
		l++;
	while (s[r] != '1')
		r--;
	while (l <= r)
	{
		if (s[l] == '0') count++;
		l++;
	}
	std::cout << count << std::endl;
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
