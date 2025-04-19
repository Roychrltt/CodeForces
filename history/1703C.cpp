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
		int n;
		std::cin >> n;
		std::vector<int> v(n);
		for (int i = 0; i < n; i++) {
			std::cin >> v[i];
		}
		for (int i = 0; i < n; i++) {
			int len;
			std::cin >> len;
			std::string s;
			std::cin >> s;
			for (int j = 0; j < len; j++) {
				if (s[j] == 'D')
					v[i] = (v[i] + 1) % 10;
				else
					v[i] = (v[i] + 9) % 10;
			}
		}
		std::copy(v.begin(), v.end(), std::ostream_iterator<int>(std::cout, " "));
		std::cout << std::endl;
	}
	return 0;
}
