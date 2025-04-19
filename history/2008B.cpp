#include <bits/stdc++.h>

static void solve(void)
{
	int n;
	std::cin >> n;
	std::string s;
	std::cin >> s;
	int count = 0;
	for (int i = 0; i < n; i++) {
		if (s[i] == '0') count++;
	}
	int a = std::sqrt(n);
	if (a * a != n || n < 4 || (a - 2) * (a - 2) != count)
		std::cout << "No" << std::endl;
	else
		std::cout << "Yes" << std::endl;
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
