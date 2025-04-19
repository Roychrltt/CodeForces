#include <bits/stdc++.h>

static void solve(void)
{
	int n;
	std::cin >> n;
	std::string s;
	std::cin >> s;
	std::vector<int> v(26);
	for (int i = 0; i < n; i++) {
		v[s[i] - 'A']++;
	}
	int count = 0;
	for (int i = 0; i < 26; i++) {
		if (v[i] >= i + 1)
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
