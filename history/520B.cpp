#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
	int n, m;
	std::cin >> n >> m;
	int ans = 0;
	while (m > n)
	{
		if (m & 1) m++;
		else m >>= 1;
		ans++;
	}
	std::cout << ans + n - m << std::endl;
	__Made in France__
}
