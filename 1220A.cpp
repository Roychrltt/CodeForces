#include <bits/stdc++.h>

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
	int n;
	std::cin >> n;
	std::string s;
	std::cin >> s;
	int countz = 0, countn = 0;
	for (int i = 0; i < n; i++) {
		if (s[i] == 'z') countz++;
		else if (s[i] == 'n') countn++;
	}
	while (countn--) {
		std::cout << "1 ";
	}
	while (countz--) {
		std::cout << "0 ";
	}
	std::cout << std::endl;
	return 0;
}
