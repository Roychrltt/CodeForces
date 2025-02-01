#include <bits/stdc++.h>

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
	int a, b, c;
	std::cin >> a >> b >> c;
	if (b < a || c < a)
		std::cout << "NO" << std::endl;
	else
		std::cout << "YES" << std::endl;
	return 0;
}
