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
		bool odd = false, even = false;
		int sum = 0;
		for (int i = 0; i < n; i++) {
			int x;
			std::cin >> x;
			if (x & 1) odd = true;
			else even = true;
			sum += x;
		}
		if (sum % 2 == 0 && (odd ^ even))
			std::cout << "NO" << std::endl;
		else
			std::cout << "YES" << std::endl;
	}
	return 0;
}
