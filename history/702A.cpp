#include <bits/stdc++.h>

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
	int n;
	std::cin >> n;
	std::vector<int> v(n);
	for (int i = 0; i < n; i++) {
		std::cin >> v[i];
	}
	int cur = 1;
	int ans = cur;
	for (int i = 1; i < n; i++) {
		if (v[i] > v[i - 1])
			cur++;
		else
		{
			ans = std::max(ans, cur);
			cur = 1;
		}
	}
	ans = std::max(ans, cur);
	std::cout << ans << std::endl;
	return 0;
}
