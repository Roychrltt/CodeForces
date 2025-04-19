#include <bits/stdc++.h>

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
	std::string s;
	std::cin >> s;
	int count = 0;
	int n = s.length();
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			for (int k = j + 1; k < n; k++) {
				if (s[i] == 'Q' && s[j] == 'A' && s[k] == 'Q')
					count++;
			}
		}
	}
	std::cout << count << std::endl;
	return 0;
}
