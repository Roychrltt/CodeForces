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
		std::string key, s;
		std::cin >> key >> s;
		std::vector<int> v(26);
		for (int i = 0; i < 26; i++) {
			int x = key[i] - 'a';
			v[x] = i;
		}
		int sum = 0;
		for (int i = 1; i < s.length(); i++) {
			sum += std::abs(v[s[i] - 'a'] - v[s[i - 1] - 'a']);
		}
		std::cout << sum << std::endl;
	}
	return 0;
}
