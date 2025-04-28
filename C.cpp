#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	int n;
	std::cin >> n;
	std::string s;
	std::cin >> s;
	if (n == 2)
	{
		if (s == "AB") std::cout << "Alice" << std::endl;
		else std::cout << "Bob" << std::endl;
		return;
	}
	int cnta = 0, cntb = 0;
	for (char c : s)
	{
		if (c == 'A') cnta++;
		else cntb++;
	}
	int i = s.length() - 1;
	if (s[i] == 'B' && cntb > 1) std::cout << "Bob" << std::endl;
	else if (s[0] == 'B' && s[i - 1] == 'B') std::cout << "Bob" << std::endl;
	else std::cout << "Alice" << std::endl;
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
