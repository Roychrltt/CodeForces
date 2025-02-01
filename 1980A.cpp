#include <bits/stdc++.h>

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
	int t;
	std::cin >> t;
	while (t--)
	{
		int n, m;
		std::cin >> n >> m;
		std::string s;
		std::cin >> s;
		std::vector<int> v(7);
		for (int i = 0; i < n; i++) {
			v[s[i] - 'A']++;
		}
		int count = 0;
		for (int i = 0; i < 7; i++) {
			if (v[i] < m) count += m - v[i];
		}
		std::cout << count << std::endl;
	}
	return 0;
}
