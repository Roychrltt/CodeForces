#include <bits/stdc++.h>

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
	int t;
	std::cin >> t;
	int m = 0, c = 0;
	while (t--)
	{
		int a, b;
		std::cin >> a >> b;
		if (a > b) m++;
		else if (b > a) c++;
	}
	if (m > c) std::cout << "Mishka" << std::endl;
	else if (m < c) std::cout << "Chris" << std::endl;
	else std::cout << "Friendship is magic!^^" << std::endl;
	return 0;
}
