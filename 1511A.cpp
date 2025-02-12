#include <bits/stdc++.h>

static void solve(void)
{
	int n;
	std::cin >> n;
	int count = 0;
	for (int i = 0; i < n; i++) {
		int x ;
		std::cin >> x;
		if (x != 2)
			count++;
	}
	std::cout << count << std::endl;
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
