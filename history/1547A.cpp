#include <bits/stdc++.h>

static void solve(void)
{
	int x1, y1, x2, y2, a, b;
	std::cin >> x1 >> y1 >> x2 >> y2 >> a >> b;

	if (x1 > x2) std::swap(x1, x2);
	if (y1 > y2) std::swap(y1, y2);
	int len1 = x2 - x1;
	int len2 = y2 - y1;
	if (x1 == x2 && x1 == a && b > y1 && b < y2)
		len1 += 2;
	else if (y1 == y2 && y2 == b && a > x1 && a < x2)
		len2 += 2;
	std::cout << len1 + len2 << std::endl;
}

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
	int t;
	std::cin >> t;
	while (t--)
	{
		solve();
	}
	return 0;
}
