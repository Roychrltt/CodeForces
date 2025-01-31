#include <bits/stdc++.h>

int main()
{
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
		if (v[0] != v[1])
		{
			if (v[2] == v[0])
				std::cout << 2 << std::endl;
			else
				std::cout << 1 << std::endl;
		}
		else
		{
			int c = v[0];
			for (int i = 2; i < n; i++) {
				if (v[i] != c)
					std::cout << i + 1 << std::endl;
			}
		}
	}
	return 0;
}
