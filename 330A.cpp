#include <bits/stdc++.h>

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
	int r, c;
	std::cin >> r >> c;
	int rcount = 0, ccount = 0;
	std::vector<int> v(c);
	for (int i = 0; i < r; i++) {
		std::string s;
		std::cin >> s;
		if (s.find('S') != std::string::npos) rcount++;
		for (int j = 0; j < c; j++) {
			if (s[j] == 'S' && v[j]++ == 0)
				ccount++;
		}
	}
	std::cout << (r - rcount) * c + (c - ccount) * rcount << std::endl;
	return 0;
}
