#include <bits/stdc++.h>

static void solve(void)
{
	std::string s;
	std::cin >> s;
	std::vector<int> v(26);
	int count = 0;
	for (char i : s) {
		if (v[i - 'a']++ < 2) count++;
	}
	std::cout << count / 2 << std::endl;
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
