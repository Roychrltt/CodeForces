#include <bits/stdc++.h>

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
	std::string s, t;
	std::cin >> s >> t;
	int count = 0;
	for (int i = 0; i < t.length(); ++i) {
		if (t[i] == s[count])
			count++;
	}
	std::cout << count + 1 << std::endl;
	return 0;
}
