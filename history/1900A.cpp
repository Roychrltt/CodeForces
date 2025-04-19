#include <bits/stdc++.h>

static void solve(void)
{
	int n;
	std::cin >> n;
	std::string s;
	std::cin >> s;
	int cur = 0;
	int max = 0;
	int count = 0;
	for (int i = 0; i < n; i++) {
		if (s[i] == '.')
		{
			cur++;
			count++;
		}
		else
		{
			max = std::max(max, cur);
			cur = 0;
		}
	}
	max = std::max(max, cur);
	if (max > 2)
		std::cout << 2 << std::endl;
	else
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
