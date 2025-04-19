#include <bits/stdc++.h>

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
	std::string s;
	std::cin >> s;
	bool check = false;
	for (int i = 0; i < 5; i++) {
		std::string a;
		std::cin >> a;
		if (a[0] == s[0] || a[1] == s[1])
			check = true;
	}
	std::cout << (check ? "YES" : "NO") << std::endl;
	return 0;
}
