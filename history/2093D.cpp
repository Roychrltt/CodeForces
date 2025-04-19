#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	int n, q;
	std::cin >> n >> q;
	long long int cells = std::pow(2, n + 1);
	auto deal1 = [&](void) -> void
	{
		long long int x, y;
		std::cin >> x >> y;
		x--;
		y--;

		long long num = 0;
		for (int i = n - 1; i >= 0; --i) {
			int cur = 1 << i;
			if (!(x & cur) && !(y & cur))
				num ^= 0ll << (2 * i);
			if ((x & cur) && (y & cur))
				num ^= 1ll << (2 * i);
			if ((x & cur) && !(y & cur))
				num ^= 2ll << (2 * i);
			if (!(x & cur) && (y & cur))
				num ^= 3ll << (2 * i);
		}
		std::cout << num + 1 << std::endl;
	};
	auto deal2 = [&](void) -> void
	{
		long long int num;
		std::cin >> num;
		num--;

		int x = 0, y = 0;
		for (int i = n - 1; i >= 0; --i) {
			long long cur = 3ll << (2 * i);
			if ((num & cur) >> (2 * i) == 0)
				x ^= 0 << i, y ^= 0 << i;
			if ((num & cur) >> (2 * i) == 1)
				x ^= 1 << i, y ^= 1 << i;
			if ((num & cur) >> (2 * i) == 2)
				x ^= 1 << i, y ^= 0 << i;
			if ((num & cur) >> (2 * i) == 3)
				x ^= 0 << i, y ^= 1 << i;
		}
		std::cout << x + 1 << ' ' << y + 1 << std::endl;
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
