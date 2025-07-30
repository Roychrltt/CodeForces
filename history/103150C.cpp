#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	std::string s;
	std::cin >> s;
	int e = -1, z = -1, p = -1, c = -1;
	for (int i = 0; i < 26; i++)
	{
		char cc = s[i];
		if (cc == 'e') e = i;
		else if (cc == 'z') z = i;
		else if (cc == 'p') p = i;
		if (cc == 'c') c = i;
	}
	if (e < z && z < p && p < c) std::cout << "YES" << std::endl;
	else if (z < p && p < e && e < c) std::cout << "YES" << std::endl;
	else if (z < e && e < p && p < c) std::cout << "YES" << std::endl;
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
