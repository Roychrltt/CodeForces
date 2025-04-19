#include <bits/stdc++.h>

int main()
{
	int n, k, l, c, d, p, nl, np;
	std::cin >> n >> k >> l >> c >> d >> p >> nl >> np;
	int a = k * l / (nl * n);
	int b = c * d / n;
	int m = p / (np * n);
	std::cout << std::min(a, std::min(b, m)) << std::endl;
	return 0;
}
