#include <bits/stdc++.h>

static void solve(void)
{
	int a, b;
	std::cin >> a >> b;
	int len = b - a + 1;
	int count = 1, d = 1, l = 1;
	while (l < len) {
		count++;
		d++;
		l += d;
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
