#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	int n;
	std::cin >> n;
	std::string str;
	std::cin >> str;
	bool p = false, s = false;
	if (str[0] == 's') str[0] = '.';
	if (str[n - 1] == 'p') str[n - 1] = '.';
	for (int i = 0; i < n; i++) {
		if (str[i] == 's') s = true;
		if (str[i] == 'p') p = true;
	}
	if (s && p) std::cout << "NO" << std::endl;
	else
		std::cout << "YES" << std::endl;
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
