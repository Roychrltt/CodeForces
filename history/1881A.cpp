#include <bits/stdc++.h>

static void solve(void)
{
	int n, m;
	std::cin >> n >> m;
	std::string x, s;
	std::cin >> x >> s;
	int count = 0;
	if (x.find(s) != std::string::npos)
	{
		std::cout << 0 << std::endl;
		return;
	}
	while (x.size() <= 50) {
		x += x;
		count++;
		if (x.find(s) != std::string::npos)
		{
			std::cout << count << std::endl;
			return;
		}
	}
	std::cout << -1 << std::endl;
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
