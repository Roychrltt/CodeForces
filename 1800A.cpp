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
	std::string s;
	std::cin >> s;
	if (s[0] != 'm' && s[0] != 'M')
	{
		std::cout << "NO" << std::endl;
		return;
	}
	int i = 1;
	while (i < n && (s[i] == 'm' || s[i] == 'M'))
		i++;

	if (i == n || (s[i] != 'e' && s[i] != 'E'))
	{
		std::cout << "NO" << std::endl;
		return;
	}
	while (i < n && (s[i] == 'e' || s[i] == 'E'))
		i++;

	if (i == n || (s[i] != 'o' && s[i] != 'O'))
	{
		std::cout << "NO" << std::endl;
		return;
	}
	while (i < n && (s[i] == 'o' || s[i] == 'O'))
	{
		i++;
	}
	if (i == n || (s[i] != 'w' && s[i] != 'W'))
	{
		std::cout << "NO" << std::endl;
		return;
	}
	while (i < n && (s[i] == 'w' || s[i] == 'W'))
	{
		i++;
	}
	std::cout << (i == n ? "YES" : "NO") << std::endl;
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
