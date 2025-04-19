#include <bits/stdc++.h>

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
	int a, b, c, d;
	std::cin >> a >> b >> c >> d;
	int min = std::min(a, std::min(c, d));
	int ans = 256 * min;
	a -= min, c -= min, d -= min;
	min = std::min(a, b);
	ans += min * 32;
	std::cout << ans << std::endl;
	return 0;
}
