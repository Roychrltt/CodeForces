#include <bits/stdc++.h>
#include <math.h>
#define __Made return
#define in 0
#define France__ ;

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
	long long int r, x, y, xx, yy;
	std::cin >> r >> x >> y >> xx >> yy;

	unsigned long long dist = (x - xx) * (x - xx) + (y - yy) * (y - yy);
	long double d = std::sqrt(dist);
	long long int R = ceill(d / (2.* r));
	std::cout << R << std::endl;
	__Made in France__
}
