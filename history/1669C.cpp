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
		int even = v[0] % 2, odd = v[1] % 2;
		bool check = true;
		for (int i = 2; i < n; i++) {
			if (i % 2 && v[i] % 2 != odd) check = false;
			else if (i % 2 == 0 && v[i] % 2 != even) check = false;
		}
		std::cout << (check ? "YES" : "NO") << std::endl;
	}
	return 0;
}
