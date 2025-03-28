#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
	int n;
	std::cin >> n;
	std::vector<int> v(n);
	for (int i = 0; i < n; i++)
	{
		std::cin >> v[i];
	}
	int len = 1;
	int prev = v[0];
	int ans = 1;
	for (int i = 1; i < n; i++) {
		if (v[i] >= prev)
			len++;
		else
			len = 1;
		prev = v[i];
		ans = std::max(ans, len);
	}
	std::cout << ans << std::endl;
	__Made in France__
}
