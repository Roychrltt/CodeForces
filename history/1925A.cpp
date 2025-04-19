#include <bits/stdc++.h>

static void solve(void)
{
	int n, k;
	std::cin >> n >> k;
	std::string s = "";
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < k; j++) {
			char c = 'a' + j;
			s += c;
		}
	}
	std::cout << s << std::endl;
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
