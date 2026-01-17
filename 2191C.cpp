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
	int cnt = 0;
	for (char& c : s) cnt += (c == '0');
	int tomove = 0;
	for (int i = 0; i < cnt; i++)
		tomove += (s[i] != '0');
	if (cnt == 0 || cnt == n || tomove == 0)
	{
		std::cout << "Bob" << std::endl;
		return;
	}
	std::cout << "Alice" << std::endl;
	std::cout << tomove * 2 << std::endl;
	for (int i = 0; i < cnt; i++)
		if (s[i] == '1') std::cout << i + 1 << " ";
	for (int i = cnt; i < n; i++)
		if (s[i] == '0') std::cout << i + 1 << " ";
	std::cout << std::endl;
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
