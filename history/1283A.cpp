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
		int h, m;
		std::cin >> h >> m;
		std::cout << (23 - h) * 60 + 60 - m << std::endl;
	}
	return 0;
}
