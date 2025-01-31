#include <bits/stdc++.h>

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
	std::vector<int> v(4);
	for (int i = 0; i < 4; i++) {
		std::cin >> v[i];
	}
	std::string s;
	std::cin >> s;
	int len = s.length();
	int count = 0;
	for (int i = 0; i < len; i++) {
		count += v[s[i] - '0' - 1];
	}
	std::cout << count << std::endl;
	return 0;
}
