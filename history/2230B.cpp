#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	std::string s;
	std::cin >> s;
	int pref2 = 0;
	int suf = 0;

	for (char x : s)
		if (x == '1' || x == '3') suf++;

	int ans = pref2 + suf;

	for (char x : s) {
		if (x == '2') pref2++;
		if (x == '1' || x == '3') suf--;
		ans = std::max(ans, pref2 + suf);
	}

	std::cout << (s.length() - ans) << "\n";
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
