#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	int n, q;
	std::cin >> n >> q;
	long long int cells = std::pow(2, n + 1);
	auto deal1 = [&]() -> void
	{
		long long int x, y;
		std::cin >> x >> y;
	};
	auto deal2 = [&]() -> void
	{
		long long int num;
		std::cin >> num;
	};
	while (q--)
	{
		std::string input;
		std::cin >> input;
		if (input[0] == '-')
			deal1();
		else
			deal2();
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
