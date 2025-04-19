#include <bits/stdc++.h>

int main()
{
	int t;
	std::cin >> t;
	std::string s;
	std::cin >> s;
	if (t < 26)
	{
		std::cout << "NO" << std::endl;
		return 0;
	}
	std::vector<int> v(26, 1);
	for (int i = 0; i < t; i++) {
		v[std::tolower(static_cast<int>(s[i])) - 'a'] = 0;
	}
	if (std::accumulate(v.begin(), v.end(), 0))
		std::cout << "NO" << std::endl;
	else
		std::cout << "YES" << std::endl;
	return 0;
}
