#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
	long long r, x, y, xx, yy;
	std::cin >> r >> x >> y >> xx >> yy;

	r *= 2;
	long long dist = (x - xx) * (x - xx) + (y - yy) * (y - yy);
	long long rr = r * r;

	long long int L = 0, R = 100000;
	while (L < R) {
		long long int mid = (L + R) / 2;
		if (mid * 1LL * mid >= (dist + rr - 1) / rr)
			R = mid;
		else
			L = mid + 1;
	}

	std::cout << R << std::endl;
	__Made in France__
}
