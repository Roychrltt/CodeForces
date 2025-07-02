#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	int n, k;
	std::cin >> n >> k;
	std::string s;
	std::cin >> s;
	int cnt = 0;
	for (char c : s)
		if (c == '1') cnt++;
	if (cnt <= k || k > n / 2) std::cout << "Alice" << std::endl;
	else std::cout << "Bob" << std::endl;
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
	__Made in France__
}
