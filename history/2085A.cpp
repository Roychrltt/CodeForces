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
	std::string r(s);
	std::reverse(r.begin(), r.end());
	if (r > s)
	{
		std::cout << "YES" << std::endl;
		return;
	}
	std::array<int, 26> a = {0};
	int count = 0;
	for (int i = 0; i < n; i++) {
		if (a[s[i] - 'a']++ == 0) count++;
	}
	if (count >= 2 && k > 0) std::cout << "YES" << std::endl;
	else std::cout << "NO" << std::endl;
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
