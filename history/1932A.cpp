#include <bits/stdc++.h>

static void solve(void)
{
	int n;
	std::cin >> n;
	std::string s;
	std::cin >> s;
	int i = 1;
	while (i < n) {
		if (s[i] == '*' && s[i - 1] == '*')
			break;
		i++;
	}
	int count = 0;
	for (int j = 0; j < i; j++) {
		if (s[j] == '@')
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
