/*
 * Author: Chachou33
 */
#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

template<typename... Args>
void print(Args... args)
{
	((std::cout << args << " "), ...);
	std::cout << std::endl;
}

static void solve(void)
{
	int n;
	std::cin >> n;
	std::string s;
	std::cin >> s;
	int	cnt0 = 0;
	for (char c : s) cnt0 += (c == '0');
	int cnt1 = n - cnt0;
	if (cnt0 == n)
	{
		std::cout << 0 << std::endl;
		return;
	}
	if ((cnt1 & 1) && !(cnt0 & 1))
	{
		std::cout << -1 << std::endl;
		return;
	}
	if (cnt0 & 1)
	{
		std::cout << cnt0 << std::endl;
		for (int i = 0; i < n; i++)
			if (s[i] == '0') std::cout << i + 1 << " ";
		std::cout << std::endl;
	}
	else
	{
		std::cout << cnt1 << std::endl;
		for (int i = 0; i < n; i++)
			if (s[i] == '1') std::cout << i + 1 << " ";
		std::cout << std::endl;
	}
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
