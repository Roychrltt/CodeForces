#include <bits/stdc++.h>

int main()
{
	long long k, n, w;
	std::cin >> k >> n >> w;
	long long b = k * w * (w + 1) / 2 - n; 
	if (b > 0) std::cout << b << std::endl;
	else std::cout << 0 << std::endl;
	return 0;
}
