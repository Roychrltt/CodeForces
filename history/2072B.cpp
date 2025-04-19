#include <bits/stdc++.h>

static void solve(void)
{
	long long int n;
	std::cin >> n;
	std::string s;
	std::cin >> s;
	long long int count = 0;
	for (char c : s)
		if (c == '_') count++;
	n -= count;
	long long int a = n / 2;
	long long int b = (n % 2) ? a + 1 : a;
	std::cout << a * b * count << std::endl;
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
