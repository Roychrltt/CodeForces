#include <bits/stdc++.h>

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
	long long a, b, c;
	std::cin >> a >> b >> c;
	long long int x = a + a + b + b;
	long long int y = a + b + c;
	long long int z = b + b + c + c;
	long long int n = a + a + c + c;
	std::cout << std::min(std::min(x, std::min(n, y)), z) << std::endl;
	return 0;
}
